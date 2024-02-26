#include <stdio.h>
#include <string.h>

#define MAX 30

int strcmpRic(char[], char[]);

int main() {
	char str1[MAX + 1], str2[MAX + 1];
	int calcolato, funzione;
	
	printf("Inserisci la prima stringa: ");
	gets(str1);
	
	printf("\nInserisci la seconda stringa: ");
	gets(str2);
	
	calcolato = strcmpRic(str1, str2);
	funzione = strcmp(str1, str2);
	
	printf("\nRisultato calcolato: %d", calcolato);
	printf("\nRisultato funzione: %d\n\n", funzione);
	
	if (calcolato == funzione) {
		printf("Status: Corretto");
	}
	else {
		printf("Status: Errato");
	}
}

int strcmpRic(char s1[], char s2[]) {
	if (*(s1) < *(s2)) {
		return -1;
	}
	else {
		if (*(s1) > *(s2)) {
			return 1;
		}
		else {
			if (*(s1) == '\0' || *(s2) == '\0') {
				return 0;
			}
			
			return 0 + strcmpRic(s1 + 1, s2 + 1);
		}
	}
}
