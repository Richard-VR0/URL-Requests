x = 2

def incremento():
    global x                #Utilizziamo l'istruzione global per indicare che x è una variabile globale
    x += 1
    return x

print(incremento())