#include <stdio.h>
#include <stdlib.h>

int main() {
	int n, i;
	int *v;
	
	printf("Inserisci la dimensione dell'array: ");
	scanf("%d", &n);
	
	v = (int *)malloc(n * sizeof(int));
	
	for (i = 0; i < n; i++) {
		printf("\nInserisci un numero: ");
		scanf("%d", &v[i]);
	}
	
	printf("\n\nVettore inserito: ");
	for (i = 0; i < n; i++) {
		printf("%d ", v[i]);
	}
	
	return 0;
}
