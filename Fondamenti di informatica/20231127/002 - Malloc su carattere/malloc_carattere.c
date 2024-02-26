#include <stdio.h>
#include <stdlib.h>

int main() {
	char *ptr;
	
	ptr = malloc(sizeof(char));
	
	if(ptr == NULL) {
		printf("Allocazione fallita");
		return -1;
	}
	
	*ptr = 'a';
	
	printf("Carattere: %c", *ptr);
	
	free(ptr);
	
	return 0;
}
