#include <stdio.h>
#include <stdlib.h>
#define N 3			//righe/colonne matrice degli esempi 1 e 2
#define rows 3		//righe matrice dell'esempio 3
#define cols 4		//colonne matrice dell'esempio 3

int main(int argc, char* argv[]) {
	int i, j;
	
	//ESEMPIO 1
	//Allocazione statica nello stack
	int mat[N][N] = {{1, 2, 3}, {4, 5, 6}, {7, 8, 9}};
	
	printf("Allocazione nello stack (statica): \n");
	printf("%d ", *(mat[0]));		//1
	printf("%d ", *(mat[0] + 1));	//2
	printf("%d\n", *(mat[0] + 2));	//3
	
	printf("%d ", *(mat[1]));		//4
	printf("%d ", *(mat[1] + 1));	//5
	printf("%d\n", *(mat[1] + 2));	//6
	
	printf("%d ", *(mat[2]));		//7
	printf("%d ", *(mat[2] + 1));	//8
	printf("%d\n", *(mat[2] + 2));	//9
	
	//ESEMPIO 2
	//Allocazione dinamica nell'heap
	/*
	int *array0 = malloc(N * sizeof(int));		//1° array
	int *array1 = malloc(N * sizeof(int));		//2° array
	int *array2 = malloc(N * sizeof(int));		//3° array
	
	int **array = malloc(N * sizeof(int *));	//array di puntatori
	
	array[0] = array0;
	array[1] = array1;
	array[2] = array2;
	*/
	
	//Si può fare anche così (molto più veloce)
	/*
	int **array = malloc(N * sizeof(int *));	//array di puntatori
	
	array[0] = malloc(N * sizeof(int));
	array[1] = malloc(N * sizeof(int));
	array[2] = malloc(N * sizeof(int));
	*/
	
	//Oppure utilizzare un ciclo for
	int **array = malloc(N * sizeof(int *));	//array di puntatori
	
	for (i = 0; i < N; i++) {
		array[i] = malloc(N * sizeof(int));
	}
	
	printf("\n\nAllocazione nell'heap (dinamica): \n");
	
	for (i = 0; i < N; i++) {
		for (j = 0; j < N; j++) {
			*(*(array + i) + j) = i + j;			//accediamo con la notazione *(*(array + i) + j) che corrisponde alla notazione array[i][j]
			
			printf("%d ", *(*(array + i) + j));
		}
		
		printf("\n");
	}
	
	//ESEMPIO 3
	//Allocazione di una matrice con celle tutte contigue
	int **A = malloc(rows * sizeof(int *));		//Allochiamo dinamicamente un array di puntatori
	
	A[0] = malloc(rows * cols * sizeof(int));	//Allochiamo in A[0] un tutta la matrice
	
	for (i = 1; i < rows; i++) {
		A[i] = A[0] + i * cols;					//Colleghiamo ogni array all'inizio di esso
	}
	
	printf("\n\nAllocazione nell'heap di una matrice con celle contigue: \n");
	
	for (i = 0; i < rows; i++) {
		for (j = 0; j < cols; j++) {
			A[i][j] = i;			//accediamo con la notazione *(*(array + i) + j) che corrisponde alla notazione array[i][j]
			
			printf("%d ", A[i][j]);
		}
		
		printf("\n");
	}
	
	free(array);
	free(A);
	
	return 0;
}
