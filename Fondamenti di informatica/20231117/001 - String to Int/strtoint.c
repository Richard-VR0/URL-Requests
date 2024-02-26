#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define DIM 10

void lettura(char *);
int controllo(char *);
int conversione(char *);

int main() {
	char str[DIM];
	int numero, errore;
	
	lettura(str);
	
	errore = controllo(str);
	
	if (errore) {
		printf("La stringa inserita non puo' essere convertita in un numero");
	}
	else {
		numero = conversione(str);
		
		printf("\"%s\" --> %d", str, numero);
	}
	
	return 0;
}

void lettura(char *str) {
	printf("Inserisci la stringa da convertire in numero decimale: ");
	
	gets(str);
}

int controllo(char *str) {
	int i, flag;
	
	flag = 0;
	
	if (str[0] == '-') {
		i = 1;
	}
	else {
		i = 0;
	}
	
	while (i < DIM && flag == 0 && str[i] != '\0') {
		if (str[i] < '0' || str[i] > '9') {
			flag = 1;
		}
		
		i++;
	}
	
	return flag;
}

int conversione(char *str) {
	int num = 0, i;
	
	if (str[0] == '-') {
		i = 1;
	}
	else {
		i = 0;
	}
	
	while (i < DIM && str[i] != '\0') {
		num = (num * 10) + str[i] - '0';
		
		i++;
	}
	
	if (str[0] == '-') {
		num = -num;
	}
	
	return num;
}
