#include <stdio.h>

void swap(int *a, int *b);

int main() {
	int a, b;
	
	a = 5;
	b = 3;
	
	printf("\na = %d\tb = %d\n", a, b);
	
	swap(&a, &b);
	
	printf("\na = %d\tb = %d\n", a, b);
	
	return 0;
}

void swap(int *a, int *b) {
	int temp;
	
	temp = *a;
	*a = *b;
	*b = temp;
}
