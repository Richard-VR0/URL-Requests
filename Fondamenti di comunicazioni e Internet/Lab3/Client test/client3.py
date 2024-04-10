from socket import *

server_name = "localhost"
server_port = 14000

client_socket = socket(AF_INET, SOCK_STREAM)            # Tipo di protocollo (TCP)

print("connected")

client_socket.connect((server_name, server_port))       # Connessione al Server

print("waiting to send string")

message = input("Enter string: ")

print("sending in progress")

client_socket.send(message.encode('utf-8'))

response = client_socket.recv(1024)

print(response.decode('utf-8'))

client_socket.close()