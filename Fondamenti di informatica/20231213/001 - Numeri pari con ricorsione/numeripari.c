#include <stdio.h>
#define N 10

int conta_pari(int[], int);

int main() {
	int i;
	int v[N] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
	
	printf("Conteggio numeri pari: %d", conta_pari(v, N));
	
	return 0;
}

int conta_pari(int v[], int dim) {
	if (dim == 0) {
		return 0;
	}
	
	if (v[0] % 2 == 0) {
		return 1 + conta_pari(v + 1, dim - 1);
	}
	else {
		return conta_pari(v + 1, dim - 1);
	}
}
