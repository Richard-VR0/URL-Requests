from socket import *

def is_prime(n):
    try:
        number = int(n)
    except:
        primo = -1
        return str(primo)

    if number > 1:
        primo = 1
        i = 2

        while i < (number / 2) and primo == 1:
            if (number % i == 0):
                primo = 0

            i += 1

    else:
        primo = 0

    return str(primo)

server_port = 12000

server_socket = socket(AF_INET, SOCK_DGRAM)             # Tipo di indirizzo (IPv4) , Tipo di trasporto (UDP)

server_socket.bind(("", server_port))                   # Associazione della porta alla socket

while True:
    request, client_address = server_socket.recvfrom(2048)

    print("Datagram from: ", client_address)

    num = request.decode('utf-8')

    response = is_prime(num)

    server_socket.sendto(response.encode('utf-8'), client_address)