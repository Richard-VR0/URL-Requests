#include <stdio.h>
#define N 5

int sottomatrici(int[][N], int, int);

int main() {
	int mat[N][N] = {{1, 3, 10, 18, 17}, {2, 1, 9, 8, 8}, {3, 5, 7, 7, 7}, {4, 10, 5, 9, 20}, {6, 11, 11, 1, 0}};
	
	printf("Quantita' di sottomatrici: %d", sottomatrici(mat, 2, 30));
	
	return 0;
}

int sottomatrici(int mat[][N], int dim, int val) {
	int i, j, somma, m, n, conta;
	
	conta = 0;
	
	for (i = 0; i <= N - dim; i++) {
		for (j = 0; j <= N - dim; i++) {
			somma = 0;
			
			for (m = i; m < dim; m++) {
				for (n = j; n < dim; n++) {
					somma += mat[m][n];
				}
			}
			
			if (somma == val) {
				conta++;
			}
		}
	}
	
	return conta;
}
