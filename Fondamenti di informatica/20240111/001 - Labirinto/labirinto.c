#include <stdio.h>
#define M 5		//Righe
#define N 5		//Colonne
#define K 10	//Numero di mosse

typedef struct {
	int vert, horiz;
} coord;

void verifica_percorso(int [][N], coord [], int);

int main() {
	coord mosse[K];				//Array delle mosse
	int dim_mosse = 0;			//Dimensione effettiva array delle mosse
	int aux1 = 1, aux2 = 1, i, j;
	int mat[M][N] = {{0, 1, 0, 1, 1},
					 {0, 0, 1, 1, 0},
					 {1, 0, 0, 0, 0},
					 {1, 1, 0, 1, 0},
					 {1, 1, 1, 1, 0}};				//Matrice
	
	for (i = 0; i < K && aux1 != 0 || aux2 != 0; i++) {
		printf("Inserisci la mossa nel formato vert, horiz: ");
		scanf("%d,%d", &aux1, &aux2);
		
		if (aux1 != 0 || aux2 != 0) {
			mosse[i].vert = aux1;
			mosse[i].horiz = aux2;
			
			dim_mosse++;
		}
	}
	
	printf("\n\nArray di mosse: ");
	for (i = 0; i < dim_mosse; i++) {
		printf(" -> %d, %d", mosse[i].vert, mosse[i].horiz);
	}
	
	printf("\n\nMatrice: \n");
	for (i = 0; i < M; i++) {
		for (j = 0; j < N; j++) {
			printf("%d ", mat[i][j]);
		}
		
		printf("\n");
	}
	
	
	verifica_percorso(mat, mosse, dim_mosse);
	
	return 0;
}

void verifica_percorso(int matrice[][N], coord mosse[], int dim_mosse) {
	int i, j, index_mosse, deltav, deltah;
	int errore = 0, cont;
	
	i = 0;
	j = 0;
	
	index_mosse = 0;
		
	while (!errore && index_mosse < dim_mosse) {
		errore = 0;
		
		deltav = mosse[index_mosse].vert;
		deltah = mosse[index_mosse].horiz;
		
		if (!((i + deltav) < 0 || (i + deltav) > M || (j + deltah) < 0 || (j + deltah) > N)) {
			if (deltah == 0) {		//Movimento verticale
				cont = 0;
				while (cont <= deltav && errore != 1) {
					if (matrice[i + cont][j] == 1) {
						errore = 1;
					}
					
					cont++;
				}
			}
			else {					//Movimento orizzontale
				cont = 0;
				while (cont <= deltah && errore != 1) {
					if (matrice[i][j + cont] == 1) {
						errore = 1;
					}
					
					cont++;
				}
			}
			
			if (errore == 0) {
				i += deltav;
				j += deltah;
				
				index_mosse++;
			}
		}
		else {
			errore = 2;
		}
	}
	
	switch (errore) {
		case 0: {
			printf("\n------------------\nSuccesso, cella di arrivo: (%d, %d)", i, j);
			break;
		}
		
		case 1: {
			printf("\n------------------\nINSuccesso, ultima cella attraversata: (%d, %d)", i, j);
			break;
		}
		
		case 2: {
			printf("\n------------------\nINSuccesso, ultima cella valida: (%d, %d)", i, j);
			break;
		}
	}
}
