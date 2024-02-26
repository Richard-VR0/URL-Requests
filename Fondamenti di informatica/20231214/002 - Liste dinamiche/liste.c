#include <stdio.h>
#include <stdlib.h>

typedef struct n_t {
	int dato;
	struct n_t *next;
} node_t;

typedef node_t *list;

list inserimento_in_testa(list, int);
list inserimento_in_coda (list, int);
void visualizza_lista (list);

int main(int argc, char* argv[]) {
	list lista = NULL;
	
	visualizza_lista(lista);
	
	lista = inserimento_in_testa(lista, 4);
	visualizza_lista(lista);
	lista = inserimento_in_testa(lista, 3);
	visualizza_lista(lista);
	lista = inserimento_in_testa(lista, 2);
	visualizza_lista(lista);
	lista = inserimento_in_testa(lista, 1);
	visualizza_lista(lista);
	lista = inserimento_in_coda(lista, 5);
	
	visualizza_lista(lista);
	
	free(lista);
	
	return 0;
}

list inserimento_in_testa(list testa, int elem) {
	list nuova_testa = (node_t *) malloc(sizeof(node_t));
	
	nuova_testa->dato = elem;
	nuova_testa->next = testa;
	
	return nuova_testa;
}

list inserimento_in_coda (list testa, int elem){
	list p;
	list temp = NULL;
	
	if((p = (node_t *)malloc(sizeof(node_t))) == NULL){
		return -1;
	}
	p->dato = elem;
	p->next = NULL;
	
	if (!testa) {
		testa = p;
	}
	else {
		temp = testa;
		
		while (temp->next != NULL) {
			temp = temp->next;
		}
		
		temp->next = p;
	}
	
	return testa;
}

void visualizza_lista (list lista) {
	if (lista == NULL) {
		printf("NULL\n\n");
	}
	else {
		printf("%d --> ", lista->dato);
		visualizza_lista(lista->next);
	}
}
