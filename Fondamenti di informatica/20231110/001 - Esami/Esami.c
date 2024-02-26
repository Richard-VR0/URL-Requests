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

int main() {
	esame_t esame;
	
	printf("Inserisci il nome del corso: ");
	gets(esame.nome_corso);
	
	printf("Inserisci il cognome del docente: ");
	gets(esame.cognome_docente);
	
	printf("Inserisci i CFU dell'esame: ");
	scanf("%d", &esame.cfu);
	
	printf("Inserisci il voto dell'esame: ");
	scanf("%d", &esame.voto);
	
	printf("\nNome del corso: %s", esame.nome_corso);
	printf("\nCognome del docente: %s", esame.cognome_docente);
	printf("\nCFU: %d", esame.cfu);
	printf("\nVoto: %d", esame.voto);
		
	return 0;
}
