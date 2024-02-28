def saluto():
    print("Ciao a tutti")

def somma(a, b):
    return a + b

def saluto_personalizzato(nome):
    #Docstring della funzione, quando andiamo sopra alla funzione con il mouse viene visualizzata la docstring
    """
    Questa funzione restituisce un saluto personalizzato, passando come parametro un testo la funzione stampa "Ciao + testo"
    """
    print("Ciao " + nome)

saluto()
print(somma(1, 2))
saluto_personalizzato("Riccardo")