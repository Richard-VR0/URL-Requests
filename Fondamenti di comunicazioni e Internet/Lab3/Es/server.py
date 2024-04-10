from socket import *

server_port = 16000

welcome_socket = socket(AF_INET, SOCK_STREAM)
welcome_socket.bind(("", server_port))
welcome_socket.listen(1)

while True:
    connection_socket, address = welcome_socket.accept()

    print("\nConnected to ", address)

    while True:
        message = connection_socket.recv(1024)

        characters = message.decode('utf-8')

        if characters == ".":
            break

        print("Message content: ", characters, "\nLength: ", len(characters), "\n")

    print("Connection close with ", address)
    connection_socket.close()
