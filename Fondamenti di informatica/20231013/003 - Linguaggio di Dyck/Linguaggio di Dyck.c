#include <stdio.h>

#define DIM 10

int main() {
	char stringa[DIM];
	int errore = 0, cont_aperte = 0, cont_chiuse = 0, i;
	
	printf("Inserisci la stringa da verificare (10 caratteri):");
	scanf("%s", &stringa);
	
	for (i = 0; i < DIM && errore == 0; i++) {
		if (stringa[i] == '[') {
			cont_aperte++;
		}
		else {
			if (stringa[i] == ']') {
				cont_chiuse++;
			}
			else {
				errore = 1;
			}
		}
	}
	
	if (errore == 0 && cont_aperte == cont_chiuse) {
		printf("\nLa stringa appartiene al linguaggio Dyck");
	}
	else {
		if (cont_aperte != cont_chiuse) {
			printf("\nLa stringa NON appartiene al linguaggio Dyck");
		}
		else {
			printf("\nLa stringa contiene altri caratteri oltre a '[' e ']'");
		}
	}
	
	return 0;
}
