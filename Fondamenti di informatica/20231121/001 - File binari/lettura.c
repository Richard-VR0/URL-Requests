#include <stdio.h>

typedef struct {
	int n1, n2, n3;
} numeri;

int main() {
	FILE *fout;
	int i;
	
	numeri n;
	
	fout = fopen("binary.bin", "rb");
	
	if (fout == NULL) {
		printf("Errore di apertura file");
		
		return -1;
	}
	
	for (i = 0; i < 5; i++) {
		fread(&n, sizeof(numeri), 1, fout);
		
		printf("n1: %d\tn2: %d\tn3: %d\n", n.n1, n.n2, n.n3);
	}
	
	return 0;
}
