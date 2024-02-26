#include <stdio.h>
#define N 3

int main() {
	int i, j, k, h;
	int mat1[N][N];
	int mat2[N][N] = {0};
		
	for (i = 0; i < N; i++) {
		for (j = 0; j < N; j++) {
			printf("Inserisci un elemento della matrice: ");
			scanf("%d", &mat1[i][j]);
		}
	}
	
	k = 0;
	h = 0;
	
	for (i = 0; i < N; i++) {
		for (j = 0; j < N; j++) {
			if (mat1[i][j] % 2 == 1) {
				mat2[k][h] = mat1[i][j];
				
				if (h + 1 == N) {
					k++;
				}
				
				h = (h + 1) % N;
			}
		}
	}
	
	printf("\n\nMatrice 1:\n");
	
	for (i = 0; i < N; i++) {
		for (j = 0; j < N; j++) {
			printf("%d\t", mat1[i][j]);
		}
		
		printf("\n");
	}
	
	printf("\n\nMatrice 2:\n");
	
	for (i = 0; i < N; i++) {
		for (j = 0; j < N; j++) {
			printf("%d\t", mat2[i][j]);
		}
		
		printf("\n");
	}
	
	return 0;
}
