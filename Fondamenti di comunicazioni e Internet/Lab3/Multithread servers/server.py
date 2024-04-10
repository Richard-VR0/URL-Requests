from socket import *
from threading import Thread

server_port = 15000

welcome_socket = socket(AF_INET, SOCK_STREAM)
welcome_socket.bind(("", server_port))
welcome_socket.listen(1)


def thread_function(conn_socket):
    while True:
        message = conn_socket.recv(1024).decode('utf-8')

        if message == ".":
            break

        response = message.upper()

        conn_socket.send(response.encode('utf-8'))

    conn_socket.close()

while True:
    print("Waiting for connections")

    connection_socket, address = welcome_socket.accept()

    print("Connected to ", address)

    thrd = Thread(target = thread_function, args = (connection_socket,))

    thrd.start()