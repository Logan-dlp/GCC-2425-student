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

class DataService:
    """ Handle data and business logic """
    def __init__(self):
        self.data_store = []

    def get_data(self):
        """ Return data store """
        return {"data": self.data_store}

    def add_data(self, new_data):
        """ Add new data to data store """
        self.data_store.append(new_data)
        return {"message": "Data stored", "data": new_data}

class RequestHandler(BaseHTTPRequestHandler):

    dataService = DataService()

    def do_GET(self):
        """ Handle GET requests """
        routes = {
            "/": lambda: {"message": "Welcome to the API!"},
            "/data": self.dataService.get_data,
        }

        response = routes.get(self.path, lambda: None)()

        if response is not None:
            self.send_json_response(200, response)
        else:
            self.send_json_response(404, {"error": "Not found"})

    def do_POST(self):
        """ Handle POST requests """

        if self.path == "/data":
            content_length = int(self.headers.get("Content-Length", 0))
            post_data = self.rfile.read(content_length)

            try:
                json_data = json.loads(post_data)
                response = self.dataService.add_data(json_data)
                self.send_json_response(201, response)
            except json.JSONDecodeError:
                self.send_json_response(400, {"error": "Bad Request: Invalid JSON format"})
        else:
            self.send_json_response(404, {"error": "Not found"})

    def send_json_response(self, status_code, data):
        """Send a JSON response to the client."""

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