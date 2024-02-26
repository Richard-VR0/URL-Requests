#include <stdio.h>
#include <string.h>
#define MAX1 100
#define MAX2 20

int main() {
	char str1[MAX1 + 1];
	char str2[MAX2 + 1];
	char *p1 = str1, *p2 = str2;
	int i;
	
	printf("Inserisci la prima stringa: ");
	gets(str1);
	
	printf("Inserisci la seconda stringa: ");
	gets(str2);
	
	printf("\nPrima stringa: %s\n\nSeconda stringa: %s", str1, str2);
	
	for (*p1; *p1 != '\0'; p1++) {}
	
	for (*p2; *p2 != '\0'; p1++, p2++) {
		*p1 = *p2;
	}
		
	printf("\n\nStringhe concatenate: %s\n", str1);
		
	return 0;
}
