#include <stdio.h>
#include <stdlib.h>

int main() {
	int dim = 2;
	int *vettore;
	
	vettore = calloc(dim, sizeof(int));
	
	vettore[0] = 10;
	vettore[1] = 20;
	
	int i;
	for (i = 0; i < dim; i++) {
		printf("%d ", vettore[i]);
	}
	
	vettore = realloc(vettore, (dim + 1) * sizeof(int));
	dim++;
	
	printf("\n\n");
	
	vettore[2] = 30;
	vettore[3] = 40;
	
	for (i = 0; i < dim; i++) {
		printf("%d ", vettore[i]);
	}
	
	free(vettore);
	
	return 0;
}
