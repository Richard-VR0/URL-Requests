age = int(input("Inserisci un l'èta: "))

if age > 18:
    print("Maggiorenne")
elif age == 18:                                 #elif corrisponde alla struttura "else if"
    print("Appena diventato maggiorenne")
else:
    print("Minorenne")