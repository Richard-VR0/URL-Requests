from socket import *

server_name = "localhost"
server_port = 14005

server_address = (server_name, server_port)

client_socket = socket(AF_INET, SOCK_STREAM)
client_socket.connect(server_address)

while True:
    message = input("Enter string ('.' to exit): ")

    client_socket.send(message.encode('utf-8'))

    if message == ".":
        break

    response = client_socket.recv(1024)

    print(response.decode('utf-8'))

print("Connection close with Server")
client_socket.close()
