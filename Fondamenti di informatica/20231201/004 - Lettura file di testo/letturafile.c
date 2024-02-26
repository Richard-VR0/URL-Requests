#include <stdio.h>

int main(int argc, char* argv[]) {
	FILE *fin;
	
	char carattere;
	
	if (argc != 3) {
		printf("sintax error: letturafile filename 1/2");
		
		return -1;
	}
	
	fin = fopen(argv[1], "r");
	
	carattere = fgetc(fin);
	
	while (carattere != EOF) {
		printf("%c", carattere);
		
		carattere = fgetc(fin);
	}
	
	fclose(fin);
	
	return 0;
}
