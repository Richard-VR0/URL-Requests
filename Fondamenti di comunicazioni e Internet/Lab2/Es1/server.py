from socket import *

server_port = 12000

server_socket = socket(AF_INET, SOCK_DGRAM)             # Tipo di indirizzo (IPv4) , Tipo di trasporto (UDP)

server_socket.bind(("", server_port))                   # Associazione della porta alla socket

counter = 0

alph = ["b", "c", "d", "f", "g", "h", "j", "k", "l", "m", "n", "p", "q", "r", "s", "t", "u", "v", "w", "x", "y", "z"]

while True:
    request, client_address = server_socket.recvfrom(2048)

    print("Datagram from: ", client_address)

    stringa = request.decode('utf-8').lower()

    for i in range(0, len(alph)):
        counter += stringa.count(alph[i])

    response = str(counter)

    server_socket.sendto(response.encode('utf-8'), client_address)