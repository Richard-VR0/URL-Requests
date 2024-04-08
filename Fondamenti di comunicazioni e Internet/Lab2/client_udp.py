from socket import *

server_name = "localhost"                                   # Oppure 127.0.0.1 - 0.0.0.0
server_port = 12000                                         # Max 65535

client_socket = socket(AF_INET, SOCK_DGRAM)                 # Tipo di indirizzo (IPv4) , Tipo di trasporto (UDP)

message = input("Enter string: ")

client_socket.sendto(message.encode('utf-8'), (server_name, server_port))

response, server_address = client_socket.recvfrom(2048)  # Quantità di byte da leggere dalla socket (2048 B)

decoded_response = response.decode('utf-8')

print(decoded_response)

client_socket.close()