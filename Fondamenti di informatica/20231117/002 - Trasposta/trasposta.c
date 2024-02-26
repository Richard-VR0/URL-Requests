#include <stdio.h>
#include <time.h>

#define R 5
#define C 5

int main() {
	int mat[R][C];
	int trasp[R][C];
	int i, j;
	
	srand(time(NULL));
	
	for (i = 0; i < R; i++) {
		for (j = 0; j < C; j++) {
			mat[i][j] = rand() % 9;
		}
	}
	
	printf("Matrice di partenza: \n");
	for (i = 0; i < R; i++) {
		for (j = 0; j < C; j++) {
			printf("%d ", mat[i][j]);
		}
		
		printf("\n");
	}
	
	for (i = 0; i < R; i++) {
		for (j = 0; j < C; j++) {
			trasp[j][i] = mat[i][j];
		}
	}
	
	printf("\n\nMatrice trasposta: \n");
	for (i = 0; i < R; i++) {
		for (j = 0; j < C; j++) {
			printf("%d ", trasp[i][j]);
		}
		
		printf("\n");
	}
	
	return 0;
}
