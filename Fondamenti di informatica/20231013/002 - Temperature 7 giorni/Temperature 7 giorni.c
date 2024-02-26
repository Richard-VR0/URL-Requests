#include <stdio.h>

#define GIORNI 7

int main() {
	int i, j;
	int temp[GIORNI];
	
	for (i = 0; i < GIORNI; i++) {
		printf("Inserisci la temperatura del giorno:");
		scanf("%d", &temp[i]);
	}
	
	printf("GIORNO\tTEMPERATURA\tISTOGRAMMA\n");
	
	for (i = 0; i < GIORNI; i++) {
		printf("%d\t%d\t\t", i, temp[i]);
		
		for (j = 0; j < (temp[i] - 34); j++) {
			printf("*");
		}
		
		printf("\n");
	}
	
	return 0;
}
