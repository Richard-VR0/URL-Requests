# import random                       #Importiamo tutte le funzioni e classi della libreria

# from random import randint, choice        #Dalla libreria importiamo singole funzioni

# from random import *                #Dalla libreria importiamo tutte le funzioni e classi

import random

num1 = random.random()               #Genera un numero casuale di tipo float compreso tra 0 e 1

print(num1)
#+----------------------------------------------------------------------------------------------+
num2 = random.randint(1, 10)        #Genera un numero di tipo int compreso tra a e b

print(num2)
#+----------------------------------------------------------------------------------------------+
num3 = random.randrange(1, 20, 2)   #Genera solo numeri dispari compresi tra a e b

print(num3)
#+----------------------------------------------------------------------------------------------+
num3 = random.randrange(0, 20, 2)   #Genera solo numeri pari compresi tra a e b

print(num3)
#+----------------------------------------------------------------------------------------------+
mesi = ["Gennaio", "Febbraio", "Marzo", "Aprile", "Maggio", "Giugno", "Luglio", "Agosto", "Settembre", "Ottobre", "Novembre", "Dicembre"]

print(random.choice(mesi))          #Sceglie in maniera casuale un elemento della lista