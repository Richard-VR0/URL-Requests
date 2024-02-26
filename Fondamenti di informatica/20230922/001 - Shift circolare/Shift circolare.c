#include <stdio.h>

int main() {
	int a, b, c, val_b, val_c;
	
	printf("Inserire il valore di a: ");
	scanf("%d", &a);
	
	printf("Inserire il valore di b: ");
	scanf("%d", &b);
	
	printf("Inserire il valore di c: ");
	scanf("%d", &c);
	
	val_b = b;
	val_c = c;
	b = a;
	c = val_b;
	a = val_c;
	
	printf("\nIl valore di a e' %d", a);
	printf("\nIl valore di b e' %d", b);
	printf("\nIl valore di c e' %d", c);
}
