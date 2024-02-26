#include <stdio.h>
#include <stdlib.h>

int main() {
	int *v;
	int i, numero, DIM = 3;
	
	v = malloc(DIM * sizeof(int));
	
	for (i = 0; i < DIM; i++) {
		printf("Inserisci un numero: ");
		scanf("%d", &numero);
		
		v[i] = numero;
	}
	
	for (i = 0; i < DIM; i++) {
		printf("%d ", v[i]);
	}
	
	printf("\n\n");
	
	DIM += 2;
	
	v = calloc(v, DIM * sizeof(int));
	
	for (i = 3; i < DIM; i++) {
		printf("Inserisci un numero: ");
		scanf("%d", &numero);
		
		v[i] = numero;
	}
	
	for (i = 0; i < DIM; i++) {
		printf("%d ", v[i]);
	}
	
	free(v);
}
