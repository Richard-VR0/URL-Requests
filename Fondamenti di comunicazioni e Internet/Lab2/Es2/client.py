from socket import *

server_name = "localhost"
server_port = 12000

client_socket = socket(AF_INET, SOCK_DGRAM)

message = input("Enter number: ")

client_socket.sendto(message.encode('utf-8'), (server_name, server_port))

timeout_value = 2
client_socket.settimeout(timeout_value)

try:
    response, server_address = client_socket.recvfrom(2048)

    decoded_response = response.decode('utf-8')

    if (decoded_response == "1"):
        print("Numero primo")
    elif (decoded_response == "0"):
        print("Numero NON primo")
    else:
        print("Caratteri inseriti non validi")

except timeout:
    print("Unreachable server")

finally:
    client_socket.close()