#include <stdio.h>

int main(int argc, char *argv[]) {
	int i, somma = 0;
	
	for (i = 1; i < argc; i++) {
		somma += atoi(argv[i]);
	}
	
	printf("%d", somma);
	
	return 0;
}
