#include <stdio.h>
#include "mate.h"

int main(int argc, char* argv[]) {
	int a, b, m;
	float p;
	
	if (argc != 3) {
		return -1;
	}
	
	a = atoi(argv[1]);
	b = atoi(argv[2]);
	
	p = potenza(a, b);
	
	m = mcd(a, b);
	
	printf("\n\n%d^%d = %.2f", a, b, p);
	
	printf("\n\nMCD(%d, %d) = %d", a, b, m);
	
	return 0;
}
