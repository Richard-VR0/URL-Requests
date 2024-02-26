#include <stdio.h>
#define MAX 100

int len_ric(char *str);

int main(int argc, char *argv[]) {
	char str[MAX + 1];
	int l;
	
	printf("Inserisci la stringa: ");
	gets(str);
	
	l = len_ric(str);
	
	printf("\nLunghezza stringa: %d", l);
	
	return 0;
}

int len_ric(char *str) {
    if(*(str) == '\0') {
        return 0;
    }
    else {
        return 1 + len_ric(str+1);
    }
}
