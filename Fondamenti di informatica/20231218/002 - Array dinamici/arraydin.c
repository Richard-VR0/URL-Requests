#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define N 64

char* occorrenze(char[], int, int*);
int calcola_dimensione(char[], int);
char carattere_frequente(char[], int, int);

int main() {
	char iniziale[N + 1] = "AX(cdccdg)be(babadeafaka)F(xx)j";
	int dim = strlen(iniziale);
	
	printf("Iniziale:\t%s\n", iniziale);
	
	int dim_ris = 0;
	
	char * finale = occorrenze(iniziale, dim, &dim_ris);
	
	int i;
	
	printf("Finale:\t\t");
	for (i = 0; i < dim_ris; i++) {
		printf("%c", finale[i]);
	}
	
	return 0;
}

int calcola_dimensione(char seq[], int dim) {
	int i, dim_ris, contare_f;
	
	dim_ris = 0;
	contare_f = 1;
	
	for (i = 0; i < dim; i++) {
		if (seq[i] == '(') {
			dim_ris += 3;
			contare_f = 0;
		}
		else {
			if (seq[i] == ')') {
				contare_f = 1;
			}
			else {
				if (contare_f) { 
					dim_ris++;
				}
			}
		}
	}
	
	return dim_ris;
}

char carattere_frequente(char seq[], int dim, int start) {
	int i, j, max, conta;
	char char_max, curr;
	
	max = 0;
	
	char_max = seq[start];
	
	for (i = start; i < dim && seq[i] != ')'; i++) {
		curr = seq[i];
		
		conta = 1;
		
		for (j = i + 1; j < dim && seq[i] != ')'; j++) {
			if (seq[j] == curr) {
				conta++;
			}
		}
		
		if (conta > max) {
			max = conta;
			char_max = curr;
		}
	}
	
	return char_max;
}

char* occorrenze(char seq[], int dim, int* dim_ris) {
	*dim_ris = calcola_dimensione(seq, dim);
	
	char* risultato = (char*) malloc(*dim_ris * sizeof(char));		//Allochiamo dinamicamente l'array di carratteri finale
	
	int i, n_ris, copia, max_c;
	
	n_ris = 0;
	copia = 1;
	
	for (i = 0; i < dim; i++) {
		if (seq[i] == '(') {
			max_c = carattere_frequente(seq, dim, i + 1);
			
			risultato[n_ris] = '(';									//Si possono semplificare le operazioni con risultato[n_ris++] = ....
			n_ris++;
			risultato[n_ris] = max_c;
			n_ris++;
			risultato[n_ris] = ')';
			n_ris++;
			
			copia = 0;
		}
		else {
			if (seq[i] == ')') {
				copia = 1;
			}
			else {
				if (copia) {
					risultato[n_ris] = seq[i];
					
					n_ris++;
				}
			}
		}
	}
	
	return risultato;
}
