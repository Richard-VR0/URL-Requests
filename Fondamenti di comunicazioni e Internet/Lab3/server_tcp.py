from socket import *

server_port = 14000

welcome_socket = socket(AF_INET, SOCK_STREAM)               # Tipo di protocollo (TCP)
welcome_socket.bind(("", server_port))
welcome_socket.listen(3)                                    # Definizione della coda di accettazione dei Clients

while True:
    connection_socket, address = welcome_socket.accept()    # Accettazione della connessione

    print("Connected to ", address)

    message = connection_socket.recv(1024)

    response = message.decode('utf-8').upper()

    connection_socket.send(response.encode('utf-8'))

    connection_socket.close()
    print("Connection close with ", address, "\n")