#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {
	FILE *fin;
	FILE *fout;
	
	char carattere;
	
	if (argc != 3) {
		printf("usage: io file_di_input file_di_output");
		
		return -1;
	}
	
	fin = fopen(argv[1], "r");
	
	if (fin == NULL) {
		printf("Errore di apertura file");
		
		return -1;
	}
	
	fout = fopen(argv[2], "w");
	
	if (fout == NULL) {
		printf("Errore di apertura file");
		
		return -1;
	}
	
	while (feof(fin) == 0) {
		carattere = fgetc(fin);
		
		fputc(carattere, fout);
	}
	
	fclose(fin);
	fclose(fout);
	
	return 0;
}
