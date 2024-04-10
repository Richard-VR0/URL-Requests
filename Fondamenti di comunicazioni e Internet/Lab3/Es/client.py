from socket import *
import time

server_name = "localhost"
server_port = 16000

server_address = (server_name, server_port)

client_socket = socket(AF_INET, SOCK_STREAM)

client_socket.connect(server_address)

for i in range (100):
    message = "0"

    client_socket.send(message.encode('utf-8'))

time.sleep(1)
message = "."
client_socket.send(message.encode('utf-8'))

client_socket.close()