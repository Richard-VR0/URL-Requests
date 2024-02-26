#include <stdio.h>
#include <string.h>
#define CORSO 50
#define DOCENTE 50

typedef struct {
	char nome_corso[CORSO + 1];
	char cognome_docente[DOCENTE + 1];
	int cfu;
	int voto;
} esame_t;

int myflush() {		//Svuota il buffer
	while (getchar() != '\n');
}

int main() {
	int num_esami, i, cfu_tot;
	float media;
	
	printf("Inserisci il numero di esami: ");
	scanf("%d", &num_esami);
	
	esame_t esame[num_esami];
	
	media = 0.0;
	cfu_tot = 0;
	
	for (i = 0; i < num_esami; i++) {
		myflush();
		
		printf("\n\nInserisci il nome del corso: ");
		gets(esame[i].nome_corso);
	
		printf("Inserisci il cognome del docente: ");
		gets(esame[i].cognome_docente);
	
		printf("Inserisci i CFU dell'esame: ");
		scanf("%d", &esame[i].cfu);
	
		printf("Inserisci il voto dell'esame: ");
		scanf("%d", &esame[i].voto);
		
		media += (float)esame[i].voto * esame[i].cfu;
		
		cfu_tot += esame[i].cfu;
	}
	
	for (i = 0; i < num_esami; i++) {
		printf("\n\nNome del corso: %s", esame[i].nome_corso);
		printf("\nCognome del docente: %s", esame[i].cognome_docente);
		printf("\nCFU: %d", esame[i].cfu);
		printf("\nVoto: %d", esame[i].voto);
	}
	
	media /= cfu_tot;
	
	printf("\n\nMedia pesata: %f", media);
	printf("\n\CFU: %d", cfu_tot);
	
	return 0;
}
