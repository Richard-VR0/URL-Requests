#include <stdio.h>
#include <math.h>

#define MAX 3

typedef struct {
	float Re;
	float Im;
} complesso_t;

int main() {
	complesso_t num[MAX];
	float modulo, max;
	int i;
	
	for (i = 0; i < MAX; i++) {
		printf("\nInserisci la parte reale: ");
		scanf("%f", &num[i].Re);
		
		printf("Inserisci la parte immaginaria: ");
		scanf("%f", &num[i].Im);
	}
	
	max = sqrt(pow(num[i].Re, 2) + pow(num[i].Im, 2));
	
	for (i = 1; i < MAX; i++) {
		modulo = sqrt(pow(num[i].Re, 2) + pow(num[i].Im, 2));
		
		if (modulo > max) {
			max = modulo;
		}
	}
	
	printf("Modulo piu' grande = %.2f", max);
	
	return 0;
}
