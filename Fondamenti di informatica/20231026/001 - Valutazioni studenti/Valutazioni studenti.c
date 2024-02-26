#include <stdio.h>
#define STD 2

typedef struct {
	int giorno;
	int mese;
	int anno;
} data_t;

typedef struct {
	char nome[30];
	char cognome[30];
	data_t ddn;
} studente_t;

int main() {
	studente_t studenti[STD];
	int i;
	
	for (i = 0; i < STD; i++) {
		printf("Inserisci il nome dello studente: ");
		scanf("%s", &studenti[i].nome);
		
		printf("Inserisci il cognome dello studente: ");
		scanf("%s", &studenti[i].cognome);
		
		printf("Inserisci la data di nascita dello studente (formato DD/MM/YYYY): ");
		scanf("%d/%d/%d", &studenti[i].ddn.giorno, &studenti[i].ddn.mese, &studenti[i].ddn.anno);
	}
	
	printf("\n");
	
	for (i = 0; i < STD; i++) {
		printf("\n%s %s\n%d/%d/%d\n", studenti[i].nome, studenti[i].cognome, studenti[i].ddn.giorno, studenti[i].ddn.mese, studenti[i].ddn.anno);
	}
	
	return 0;
}
