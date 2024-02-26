#include <stdio.h>

typedef struct {
	int n1, n2, n3;
} numeri;

int main() {
	FILE *fout;
	int i;
	
	numeri n;
	
	fout = fopen("binary.bin", "wb");
	
	if (fout == NULL) {
		printf("Errore di apertura file");
		
		return -1;
	}
	
	for (i = 0; i < 5; i++) {
		n.n1 = i;
		n.n2 = i + 1;
		n.n3 = i + 2;
		
		fwrite(&n, sizeof(numeri), 1, fout);
	}
	
	return 0;
}
