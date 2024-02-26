#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define MAX 10

int main() {
	char *str;
	char s1[MAX + 1], s2[MAX + 1];
	
	printf("Inserisci la stringa 1: ");
	gets(s1);
	printf("Inserisci la stringa 2: ");
	gets(s2);
	
	str = (char *) malloc(strlen(s1) + strlen(s2) + 1);
	if(str == NULL) {
		printf("Allocazione fallita");
		return -1;
	}
	else {
		strcpy(str, s1);
		printf("\n%s", str);
		strcat(str, s2);
		printf("\n%s", str);
	}
	
	return 0;
}
