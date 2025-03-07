#!/usr/bin/python3

"""
Request with cURL: 
* GET data: `curl -X GET http://localhost:18080/data`
* POST data: `curl -X POST http://localhost:18080/data -H "Content-Type: application/json" -d '{"username": "Alice", "score": 42}'`
"""

import json
from http.server import BaseHTTPRequestHandler, HTTPServer

SERVER_IP = "127.0.0.1"
SERVER_PORT = 18080

local_data_storage = []

class RequestHandler(BaseHTTPRequestHandler):
    def do_GET(self):
        if self.path == '/':
            self.send_json_response(200, {"message": "Welcome to my API!"})
        elif self.path == '/data':
            self.send_json_response(200, {"data": local_data_storage})
        else:
            self.send_json_response(404, {"error": "Not found"})
    
    def do_POST(self):
        if self.path == '/data':
            content_length = int(self.headers.get("Content-Length", 0))
            post_data = self.rfile.read(content_length)

            try:
                json_data = json.loads(post_data)
                local_data_storage.append(json_data)
                self.send_json_response(201, {"message": "Data stored", "data": json_data})
            except json.JSONDecodeError:
                self.send_json_response(400, {"error": "Invalid JSON format"})
        else:
            self.send_json_response(404, {"error": "Not found"})

    def send_json_response(self, status_code, data):
        """ Send a JSON response to the client"""
        self.send_response(status_code)
        self.send_header("Content-Type", "application/json")
        self.end_headers()
        self.wfile.write(json.dumps(data).encode("utf8"))

def run_server():
    """ Initialise the server and start it """

    server_address = (SERVER_IP, SERVER_PORT)
    server = HTTPServer(server_address, RequestHandler)

    print(f"Starting server int {SERVER_IP}:{SERVER_PORT}, use <Ctrl-C> to exit.")

    try:
        server.serve_forever()
    except KeyboardInterrupt:
        print("Shutting down server...")
        server.server_close()

if __name__ == '__main__':
    run_server()