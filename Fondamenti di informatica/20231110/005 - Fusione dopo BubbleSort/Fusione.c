#include <stdio.h>
#define N 5

int main() {
	int i, j, k, scambio, aux, dim, n_swap1, n_swap2;
	int v1[N], v2[N], v3[2*N];
	
	printf("Inserimento primo array\n");
	
	for (i = 0; i < N; i++) {
		printf("Inserisci un numero: ");
		scanf("%d", &v1[i]);
	}
	
	printf("\nInserimento secondo array\n");
	
	for (i = 0; i < N; i++) {
		printf("Inserisci un numero: ");
		scanf("%d", &v2[i]);
	}
	
	n_swap1 = 0;
	
	i = -1;
	
	do {
		i = i + 1;
		scambio = 0;
		
		for (j = (N - 2); j >= i; j--) {
			if (v1[j] > v1[j + 1]) {
				aux = v1[j];
				v1[j] = v1[j + 1];
				v1[j + 1] = aux;
				
				scambio = 1;
				
				n_swap1++;
			}
		}
	} while (i < (N - 2) && scambio == 1);
	
	n_swap2 = 0;
	
	i = -1;
	
	do {
		i = i + 1;
		scambio = 0;
		
		for (j = (N - 2); j >= i; j--) {
			if (v2[j] > v2[j + 1]) {
				aux = v2[j];
				v2[j] = v2[j + 1];
				v2[j + 1] = aux;
				
				scambio = 1;
				
				n_swap2++;
			}
		}
	} while (i < (N - 2) && scambio == 1);
	
	j = 0;
	k = 0;
	
	dim = 0;
	
	for (i = 0; j < N && k < N; i++) {
		if (v1[j] < v2[k]) {
			v3[i] = v1[j];
			
			j++;
			
			dim++;
		}
		else {
			if (v1[j] > v2[k]) {
				v3[i] = v2[k];
				
				k++;
				
				dim++;
			}
			else {
				v3[i] = v1[j];
				
				j++;
				k++;
				
				dim++;
			}
		}
	}
	
	while (j < N) {
		v3[i] = v1[j];
		
		j++;
		i++;
		dim++;
	}
	
	while (k < N) {
		v3[i] = v2[k];
		
		k++;
		i++;
		dim++;
	}
	
	printf("\nArray 1: ");
	for (i = 0; i < N; i++) {
		printf("%d\t", v1[i]);
	}
	
	printf("\nArray 2: ");
	for (i = 0; i < N; i++) {
		printf("%d\t", v2[i]);
	}
	
	printf("\nArray 3: ");
	for (i = 0; i < dim; i++) {
		printf("%d\t", v3[i]);
	}
	
	printf("\n\nComplessita' algoritmo");
	printf("\nOrdinamento primo array: %d", n_swap1);
	printf("\nOrdinamento secondo array: %d", n_swap2);
	printf("\n\nComplessita' totale dell'algoritmo: %d", n_swap1 + n_swap2);
	
	return 0;
}
