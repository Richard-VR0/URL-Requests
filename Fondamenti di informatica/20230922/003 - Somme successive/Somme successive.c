#include <stdio.h>

int main() {
	int x, y, segno, somma, i;
	
	printf("Inserire il primo numero: ");
	scanf("%d", &x);
	
	printf("Inserire il secondo numero: ");
	scanf("%d", &y);
	
	if (y < 0) {
		segno = -1;
	}
	else {
		segno = 1;
	}
	
	somma = 0;
	
	for (i = 0; i < y; i++) {
		somma += x;
	}
	
	somma *= segno;
	
	printf("%d + %d = %d", x, y, somma);
	
	return 0;
}
