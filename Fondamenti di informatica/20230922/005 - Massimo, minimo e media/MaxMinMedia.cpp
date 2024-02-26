#include <stdio.h>

int main() {
	int n, cont, max, min;
	float somma, media;
	
	cont = 0;
	somma = 0;
	
	do {
		printf("Inserire il voto: ");
		scanf("%d", &n);
		
		if (n > 0) {
			if (cont == 0) {
				min = n;
				max = n;
			}
			else {
				if (n > max) {
					max = n;
				}
			
				if (n < min) {
					min = n;
				}
			}
			
			cont++;
			somma += n;			
		}
	} while (n > 0);
	
	if (cont == 0) {
		printf("\nLa sequenza inserita e' nulla");
	}
	else {
		media = float(somma / cont);
		
		printf("\nIl massimo e': %d", max);
		printf("\nIl minimo e': %d", min);
		printf("\nLa media e': %f", media);
	}
	
	return 0;
}
