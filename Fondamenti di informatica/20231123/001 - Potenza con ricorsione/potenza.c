#include <stdio.h>

int pow(int b, int e);

int main() {
	int a, b, p;
	
	printf("Inserisci la base: ");
	scanf("%d", &a);
	
	printf("Inserisci l'esponente: ");
	scanf("%d", &b);
	
	p = pow(a, b);
	
	printf("\nRisultato dell'elevamento a potenza: %d", p);
	
	return 0;
}

int pow(int b, int e) {
	if (e == 0) {
		return 1;
	}
	else {
		return b * pow(b, e - 1);
	}
}
