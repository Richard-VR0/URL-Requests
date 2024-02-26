#include <stdio.h>

int main() {
	int i, q, r;
	float somma;
	
	somma = 0.0;
	
	printf("Inserire il valore q: ");
	scanf("%d", &q);
	
	printf("Inserire il valore r: ");
	scanf("%d", &r);
	
	while (r < q) {
		printf("\nErrore, valore di r minore di q");
		printf("\nReinserire il valore r: ");
		scanf("%d", &r);
	}
	
	for (i = q; i <= r; i++) {
		somma += 1.0 / i;
	}
	
	printf("\nIl risultato della sommatoria e': %f", somma);
	
	return 0;
}
