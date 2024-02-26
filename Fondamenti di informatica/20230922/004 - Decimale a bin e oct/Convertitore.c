#include <stdio.h>
#include <math.h>

int main() {
	int num, n, resto, cont;
	long int bin, oct;
	
	printf("Inserire il numero da convertire: ");
	scanf("%d", &num);
	
	n = num;
	bin = 0;
	cont = 0;
	
	while (n > 0) {
		resto = n % 2;
		
		n /= 2;
		
		bin += resto * (pow(10, cont));
		cont++;
	}
	
	n = num;
	oct = 0;
	cont = 0;
	
	while (n > 0) {
		resto = n % 8;
		
		n /= 8;
		
		oct += resto * (pow(10, cont));
		cont++;
	}
	
	printf("\n\n\n%d", bin);
	printf("\n%d", oct);
	
	return 0;
}
