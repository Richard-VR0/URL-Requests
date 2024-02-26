#include <stdio.h>
#define DIM 1000	//Dimensione del vettore

int main() {
	int v[DIM];		//Dichiarazione del vettore v di dimensione DIM
	int i, j;		//Indici
	
	//Inizializzazione del vettore a 1
	for (i = 0; i < DIM; i++) {
		v[i] = 1;
	}
	
	//Crivello di Eratostene
	for (i = 2; i < DIM; i++) {
		for (j = 2 * i; j < DIM; j += i) {
			v[j] = 0;
		}
	}
	
	//Output dei numeri primi	
	printf("\nNumeri primi:\n");
	for (i = 0; i < DIM; i++) {
		if (v[i] == 1) {
			printf("%d\t", i);
		}
	}
}
