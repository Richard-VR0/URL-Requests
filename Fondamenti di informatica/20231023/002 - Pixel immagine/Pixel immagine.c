#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define X 4
#define Y 7

int main() {
	int i, j;
	
	typedef struct {
		int r, g, b;
	} Pixel;

	typedef struct {
		int val;
	} BeN;
	
	Pixel colori[X][Y];
	BeN biancoenero[X][Y];
	
	srand(time(NULL));
	
	for (i = 0; i < X; i++) {
		for (j = 0; j < Y; j++) {
			colori[i][j].r = (rand() % 256) + 1;
			colori[i][j].g = (rand() % 256) + 1;
			colori[i][j].b = (rand() % 256) + 1;
		}
	}
	
	for (i = 0; i < X; i++) {
		for (j = 0; j < Y; j++) {
			biancoenero[i][j].val = 0.2989 * colori[i][j].r + 0.587 * colori[i][j].g + 0.114 * colori[i][j].b;
		}
	}
	
	printf("R\tG\tB\n\n");
	for (i = 0; i < X; i++) {
		for (j = 0; j < Y; j++) {
			printf("%d\t%d\t%d\n", colori[i][j].r, colori[i][j].g, colori[i][j].b);
		}
		
		printf("\n\n");
	}
	
	printf("Greyscale\n\n");
	for (i = 0; i < X; i++) {
		for (j = 0; j < Y; j++) {
			printf("%d\t", biancoenero[i][j].val);
		}
		
		printf("\n\n");
	}
	
	
	return 0;
}
