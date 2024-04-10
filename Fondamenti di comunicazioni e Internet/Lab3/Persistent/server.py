from socket import *

server_port = 14005

welcome_socket = socket(AF_INET, SOCK_STREAM)
welcome_socket.bind(("", server_port))

welcome_socket.listen(1)

while True:
    connection_socket, address = welcome_socket.accept()
    print("Connecteed to ", address)

    while True:
        message = connection_socket.recv(1024).decode('utf-8')

        if message == ".":
            break

        response = message.upper()

        connection_socket.send(response.encode('utf-8'))

    print("Connection close with ", address)
    connection_socket.close()