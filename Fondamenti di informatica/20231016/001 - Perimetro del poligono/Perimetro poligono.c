#include <stdio.h>
#include <math.h>

int main() {
	int n, i;
	float perimetro = 0.0;
		
	do {
		printf("Inserisci il numero vertici del poligono: ");
		scanf("%d", &n);			//Inserimento del numero di vertici del poligono
		if (n <= 2) {
			printf("\nErrore! Un poligono e' formato da almeno 3 vertici\n\n");
		}
	} while (n <= 2);				//Controllo per evitare che venga inserito un valore <2
	
	struct s_punto{
		float x;		//Coordinata x del punto
		float y;		//Coordinata y del punto
	};
	struct s_punto punti[n];
	
	for (i = 0; i < n; i++) {
		printf("\nInserisci le coordinate del punto %d nel formato x,y: ", i);
		scanf("%f,%f", &punti[i].x, &punti[i].y);		//Inserimento delle coordinate nel formato x,y
	}
	
	for (i = 0; i < n; i++) {
		/*
		Ho gestito l'indice in maniera circolare in modo da non effettuare controlli su di esso.
		Infatti gestendo l'indice attraverso il resto della divisione si riesce a farlo rimanere entro i limiti [0,n].
		Con (i + 1) % n l'operazione restituisce il valore i+1 ma nel caso in cui i sia sull'ultima posizione del vettore
		l'operazione restituisce il valore 0, ritornando quindi all'inizio di esso.
		*/
		
		//Calcolo della distanza tra 2 punti | sqrt((x2 - x1)^2 + (y2-y1)^2)
		perimetro += sqrt(pow((punti[((i + 1) % n)].x - punti[i].x), 2) + pow((punti[((i + 1) % n)].y - punti[i].y), 2));
	}
	
	//Output di tutti i punti del poligono (DA DECOMMENTARE PER ESEGUIRE)
	/*
	printf("\nElenco dei vertici del poligono:");
	
	for (i = 0; i < n; i++) {
		printf("\nPunto %d:\t (%d, %d)", i, punti[i].x, punti[i].y);
	}
	*/
	
	printf("\n\nPerimetro: %.2f", perimetro);			//Stampa del perimetro con 2 cifre dopo la virgola
	
	return 0;
}
