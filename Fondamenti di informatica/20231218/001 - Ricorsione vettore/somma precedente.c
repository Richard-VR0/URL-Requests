#include <stdio.h>
#define N 5

void somma_prec(int*, int);

int main() {
	int vettore[N] = {1, 2, 10, 3, 6};
	
	int i;
	
	printf("Vettore prima:\t");
	for (i = 0;i < N; i++) {
		printf("%d ", vettore[i]);
	}
	
	somma_prec(vettore, N);
	
	printf("\n\nVettore dopo:\t");
	for (i = 0;i < N; i++) {
		printf("%d ", vettore[i]);
	}
	
	return 0;
}

void somma_prec(int *a, int dim) {
	if (dim >= 0) {
		somma_prec(a + 1, dim - 1);
		
		*(a + 1) += + *a;
	}
}
