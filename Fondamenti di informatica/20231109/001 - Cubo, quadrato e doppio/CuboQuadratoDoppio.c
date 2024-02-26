#include <stdio.h>

char menu();		//Funzione che mostra il menu di scelta e l'inserimento della scelta
int inserimento();	//Inserimento del numero
int cubo(int);		//Calcolo del cubo del numero inserito
int quadrato(int);	//Calcolo del quadrato del numero inserito
int doppio(int);	//Calcolo del doppio del numero inserito
void stampa(int);	//Stampa del risultato

int main() {
	int numero, ris;
	char scelta;
	
	do {
		scelta = menu();
		
		switch (scelta) {
		case 'C':
			numero = inserimento();
			ris = cubo(numero);
			stampa(ris);
			
			break;
			
		case 'Q':
			numero = inserimento();
			ris = quadrato(numero);
			stampa(ris);
			
			break;
			
		case 'D':
			numero = inserimento();
			ris = doppio(numero);
			stampa(ris);
			
			break;
			
		default:
			printf("Operazione non consentita");
			
			break;
		}
	} while (scelta == 'C' || scelta == 'Q' || scelta == 'D');
	
	return 0;
}

char menu() {
	char scelta;
	
	printf("C --> Cubo del numero\n");
	printf("Q --> Quadrato del numero\n");
	printf("D --> Doppio del numero\n");
	printf("X --> Uscita dal programma\n\n");
	printf("Inserisci l'operazione da effettuare: ");
	scanf(" %c", &scelta);
	
	return scelta;
}

int inserimento() {
	int n;
	
	printf("Inserisci un numero: ");
	scanf("%d", &n);
	
	return n;
}

int cubo(int n) {
	return n * n * n;
}

int quadrato(int n) {
	return n * n;
}

int doppio (int n) {
	return 2 * n;
}

void stampa(int n) {
	printf("Risultato dell'operazione: %d\n\n", n);
}
