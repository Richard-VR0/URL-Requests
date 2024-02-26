#include <stdio.h>
#include <stdlib.h>

int main() {
	int n, i, numero;
	int *v;
	
	n = 0;
	
	do {
		printf("Inserisci un numero: ");
		scanf("%d", &numero);
		
		if (numero != 42) {
			n++;
			
			v = realloc(v, n * sizeof(int));
			
			v[n - 1] = numero;
			
			i++;
		}
	} while(numero != 42);
	
	printf("\n\nVettore inserito: ");
	for (i = 0; i < n; i++) {
		printf("%d ", v[i]);
	}
	
	return 0;
}
