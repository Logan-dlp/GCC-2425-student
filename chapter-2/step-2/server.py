import socket

SERVER_HOST = "127.0.0.1"
SERVER_PORT = 18080
MAX_BUFFER_SIZE = 1024
ENCODING = "utf-8"

if __name__ == "__main__":
    
    server_socket = socket.socket(socket.AF_INET, socket.SOCK_STREAM)
    server_socket.setsockopt(socket.SOL_SOCKET, socket.SO_REUSEADDR, 1)
    server_socket.bind((SERVER_HOST, SERVER_PORT))
    print("Waiting for connection...")
    server_socket.listen()

    clients = []

    print(f"[SERVER] 🚀 Start listening on {SERVER_HOST}:{SERVER_PORT}...")

    try:
        while True:
            client_socket, client_address = server_socket.accept()
            print(f"[Client] ✅ Accepted connexion from {client_address}")
            clients.append(client_socket)

            while True:
                print(f"[Server] 📩 Waiting for message from {client_address}...")
                try:
                    message = client_socket.recv(MAX_BUFFER_SIZE).decode(ENCODING)
                    if not message:
                        break
                    print(f"[Client {client_address}] Received message: {message}")
                    client_socket.send("Message well received !".encode(ENCODING))
                except ConnectionResetError:
                    break
            
            print(f"[Server] ❌ Closing connection {client_address}")
            clients.remove(client_socket)
            client_socket.close()

    except KeyboardInterrupt:
        print("\n[Server] 🛑 Shutdown server...")

    except Exception as e:
          print(f"[Server] Connection reset by peer. Error: {e}")
        
    finally:
        for client in clients:
            client.close()
        server_socket.close()
        print("[Server] ✅ Shutdown completed")