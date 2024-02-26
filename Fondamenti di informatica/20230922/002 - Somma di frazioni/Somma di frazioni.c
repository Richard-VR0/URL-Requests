#include <stdio.h>

int main() {
	int n1, d1, n2, d2, nf, df;
	
	printf("Inserire il numeratore della prima frazione: ");
	scanf("%d", &n1);
	
	printf("Inserire il denominatore della prima frazione: ");
	scanf("%d", &d1);
	
	printf("\nInserire il numeratore della seconda frazione: ");
	scanf("%d", &n2);
	
	printf("Inserire il denominatore della seconda frazione: ");
	scanf("%d", &d2);
	
	df = d1 * d2;
	
	nf = (df / d1) * n1 + (df / d2) * n2;
	
	printf("\n%d/%d + %d/%d = %d/%d", n1, d1, n2, d2, nf, df);
	
	return 0;
}
