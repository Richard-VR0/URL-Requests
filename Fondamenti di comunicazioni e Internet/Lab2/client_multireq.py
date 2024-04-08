# Richieste multiple del client, valore di stop "exit"
from socket import *

server_name = "localhost"
server_port = 12000

client_socket = socket(AF_INET, SOCK_DGRAM)

message = ""

while message != "exit":
    message = input("Enter string: ")

    if message != "exit":
        client_socket.sendto(message.encode('utf-8'), (server_name, server_port))

        response, server_address = client_socket.recvfrom(2048)  # Quantità di byte da leggere dalla socket (2048 B)

        decoded_response = response.decode('utf-8')

        print(decoded_response)

client_socket.close()