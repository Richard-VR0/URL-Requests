#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define R 5
#define C 7

int main() {
	int in[R][C];
	float out[R][C];
	int i, j, k, h;
	
	srand(time(NULL));
	
	for (i = 0; i < R; i++) {
		for (j = 0; j < C; j++) {
			in[i][j] = (rand() % 9) + 1;
		}
	}
	
	for (i = 0; i < R; i++) {
		for (j = 0; j < C; j++) {
			out[i][j] = 0;
			
			for (k = -1; k <= 1; k++) {
				for (h = -1; h <= 1; h++) {
					if ((i + k) >= 0 && (i + k) < R && (j + h) >= 0 && (j + h) < C) {
						out[i][j] += in[i + k][j + h];
					}
				}
			}
								
			out[i][j] /= 9.0;
		}
	}
	
	printf("Matrice di input:\n");
	for (i = 0; i < R; i++) {
		for (j = 0; j < C; j++) {
			printf("%d   ", in[i][j]);
		}
		
		printf("\n");
	}
	
	printf("\nMatrice di output:\n");
	for (i = 0; i < R; i++) {
		for (j = 0; j < C; j++) {
			printf("%.2f\t", out[i][j]);
		}
		
		printf("\n");
	}
	
	return 0;
}
