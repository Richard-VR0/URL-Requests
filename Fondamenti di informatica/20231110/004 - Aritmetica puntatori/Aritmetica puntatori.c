#include <stdio.h>
#define N 5

int main() {
	int v[N] = {1, 2, 3, 4, 5};
	int *p;
	int i;
	
	p = v;
	
	//Passo 1
	printf("Passo 1\n");
	printf("Indirizzo array v: \n%x", v);
	printf("\n\n");
	printf("Indirizzo primo elemento dell'array v: \n%x", &v[0]);
	printf("\n\n");
	printf("Indirizzo del puntatore che punta al primo elemento dell'array v: \n%x", p);
	
	//Passo 2
	printf("\n\nPasso 2\n");
	printf("Valore a cui sta puntando p: \n%d", *p);
	
	//Passo 3
	printf("\n\nPasso 3\n");
	printf("Array v: ");
	for (i = 0; i < N; i++) {
		printf("%d  ", *v+i);
	}
	
	return 0;
}
