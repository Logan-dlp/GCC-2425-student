import socket

SERVER_HOST = "127.0.0.1"
SERVER_PORT = 18080
MAX_BUFFER_SIZE = 1024

if __name__ == "__main__":
    
    # Création d'un socket sur port dynamique
    client_socket = socket.socket(socket.AF_INET, socket.SOCK_STREAM)

    # Tentative de connexion à un sever sur une adresse et un port donné
    client_socket.connect((SERVER_HOST, SERVER_PORT))
    print(f"Connected to server {SERVER_HOST}:{SERVER_PORT}")

    message = "Hi dear server !"

    # Envoi d'un message vers le serveur encodé UTF-8
    client_socket.send(message.encode("utf-8"))
    print(f"Sended Message: {message}")

    # Réception de la réponse du serveur décodé en UTF-8
    response = client_socket.recv(MAX_BUFFER_SIZE).decode("utf-8")
    print(f"Server response: {response}")

    # Libération du socket et donc du port associé parce que on est pas des sauvages
    client_socket.close()
    print("Connection closed.")