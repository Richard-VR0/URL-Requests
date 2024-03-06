#Conversione in stringa
frase = "L'età di Riccardo è "
age = 19

frase = frase + str(age)

print(frase)

#Conversione in intero
arance = "5"

res1 = arance * 3

res2 = int(arance) * 3

print("\nNumero di arance (senza conversione in int): " , res1)
print("Numero di arance (con conversione in int): " , res2)

print("Tipo prima della conversione (arance):\t" , type(arance))
arance = int(arance)

print("Tipo dopo la conversione (arance):\t" , type(arance))