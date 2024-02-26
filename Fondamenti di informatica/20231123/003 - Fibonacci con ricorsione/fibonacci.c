#include <stdio.h>

int fib(int n);

int main() {
	int a, f;
	
	printf("Inserisci un numero: ");
	scanf("%d", &a);
	
	f = fib(a);
	
	printf("\nRisultato del fibonacci e': %d", f);
	
	return 0;
}

int fib(int n) {
	if (n == 0 || n == 1) {
		return 1;
	}
	else {
		return fib(n - 1) + fib(n - 2);
	}
}
