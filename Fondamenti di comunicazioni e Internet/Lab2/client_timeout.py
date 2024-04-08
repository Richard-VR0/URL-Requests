from socket import *

server_name = "localhost"
server_port = 12000

client_socket = socket(AF_INET, SOCK_DGRAM)

message = input("Enter string: ")

client_socket.sendto(message.encode('utf-8'), (server_name, server_port))

timeout_value = 3

client_socket.settimeout(timeout_value)

try:
    response, server_address = client_socket.recvfrom(2048)

    decoded_response = response.decode('utf-8')

    print(decoded_response)

except timeout:
    print("Server not found")

finally:
    client_socket.close()