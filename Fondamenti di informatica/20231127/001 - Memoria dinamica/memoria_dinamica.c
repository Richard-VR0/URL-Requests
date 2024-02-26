#include <stdio.h>
#include <stdlib.h>

int main() {
	int i;
	int *p;
	
	p = (int *)malloc(sizeof(int));
	
	if(p == NULL) {
		printf("\nAllocazione fallita");
		return -1;
	}
	
	*p = 10;
	
	printf("%d\n", *p);
	
	free(p);
	
	p = (int *)malloc(sizeof(int));
	
	if(p == NULL) {
		printf("\nAllocazione fallita");
		return -1;
	}
	
	*p = 20;
	
	printf("%d\n", *p);
	
	free(p);
	
	p = (int *)malloc(20 * sizeof(int));
	
	if(p == NULL) {
		printf("\nAllocazione fallita");
		return -1;
	}
	
	for (i = 0; i < 20; i++) {
		p[i] = i;
	}
	
	for (i = 0; i < 20; i++) {
		printf("%d\n", p[i]);
	}
	
	return 0;
}
