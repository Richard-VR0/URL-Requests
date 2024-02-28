#Ciclo while
i = 0

print("Ciclo while:\t", end="")
while i < 5:
    print(" -> " , i, end="")
    i += 1

#Clico for
    
print("\n\nCiclo for 2:\t", end="")
for i in range(5):                   #Se passiamo come parametro un solo numero (es. a) vale la funzione range(0, a)
    print(" -> " , i, end="")


print("\nCiclo for 1:\t", end="")
for i in range(10, 15):                   #La funzione in range crea un intervallo tra i 2 numeri che diamo come parametri (es. range(a, b) --> I = [a, a+1, a+2, ... , b-2, b-1])
    print(" -> " , i, end="")


print("\nCiclo for 3 :\t", end="")
for i in range(0, 20, 2):                   #Se passiamo 3 numeri come parametri (es. range(a, b, c) --> I = [a, a+1, ... , b-1] con passo di avanzamento c)
    print(" -> " , i, end="")
