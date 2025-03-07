import socket

SERVER_HOST = "127.0.0.1"
SERVER_PORT = 18080
MAX_BUFFER_SIZE = 1024
ENCODING = "utf-8"

if __name__ == "__main__":
    
    try:
        client_socket = socket.socket(socket.AF_INET, socket.SOCK_STREAM)
        client_socket.connect((SERVER_HOST, SERVER_PORT))
        print(f"[Client] ✅ Connected to server {SERVER_HOST}:{SERVER_PORT} from {client_socket.getsockname()}")
    
        while True:
            message = input("> ")
        
            if message.lower() == "!quit" or message.lower() == "!q":
                break

            client_socket.send(message.encode(ENCODING))

            response = client_socket.recv(MAX_BUFFER_SIZE).decode(ENCODING)
            print(f"[Server] 💬 {response}")

    except KeyboardInterrupt:
        print("[Client] 🛑 User interrupt client")

    except Exception as e:
        print(f"[Client] 🛑 Connection reset by peer. Error: {e}")

    finally:
        client_socket.close()
        print("[Client] ❌ Connection closed.")