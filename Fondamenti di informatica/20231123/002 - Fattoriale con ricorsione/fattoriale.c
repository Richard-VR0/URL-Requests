#include <stdio.h>

int fatt(int n);

int main() {
	int a, f;
	
	printf("Inserisci un numero: ");
	scanf("%d", &a);
	
	f = fatt(a);
	
	printf("\nRisultato del fattoriale e': %d", f);
	
	return 0;
}

int fatt(int n) {
	if (n == 0) {
		return 1;
	}
	else {
		return n * fatt(n - 1);
	}
}
