#include <stdio.h>

int main() {
	int d_p, m_p, y_p, d_a, m_a, y_a;
	int h_p, min_p, h_a, min_a;
	int bisestile_p = 0, bisestile_a = 0;
	int data_p = 0, data_a = 0;
	
	printf("Inserisci la data di partenza della DeLorean: ");
	scanf("%d-%d-%d %d:%d", &d_p, &m_p, &y_p, &h_p, &min_p);	//Inserimento della data e dell'ora di partenza
	
	printf("Inserisci la data di partenza della DeLorean: ");
	scanf("%d-%d-%d %d:%d", &d_a, &m_a, &y_a, &h_a, &min_a);	//Inserimento della data e dell'ora di arrivo
	
	//Verifica delle date
	int mesi[12] = {31, 30, 28, 30, 31, 30, 31, 31, 30, 31, 30, 31};
	
	if (y_p % 4 == 0) {
		bisestile_p = 1;
	}
	
	if (y_p <= 2100 && y_p >= 1888) {
		if (m_p <= 12 && m_p > 0) {
			if (d_p <= mesi[m_p] && d_p > 0) {
				if (h_p <= 23 && h_p >= 0 && min_p >= 0 && min_p < 60) {
					data_p = 1;
				}
			}
		}
	}
	
	if (y_a % 4 == 0) {
		bisestile_a = 1;
	}
	
	if (y_a <= 2100 && y_a >= 1888) {
		if (m_a <= 12 && m_a > 0) {
			if (d_a <= mesi[m_a] && d_a > 0) {
				if (h_a <= 23 && h_a >= 0 && min_a >= 0 && min_a < 60) {
					data_a = 1;
				}
			}
		}
	}
	
	if (data_p && data_a) {
		
	}
	
	printf("\n\n--------------\n%d-%d-%d %d:%d", d_p, m_p, y_p, h_p, min_p);		//Output della data di partenza
	printf("\n%d-%d-%d %d:%d", d_a, m_a, y_a, h_a, min_a);		//Output della data di arrivo
	
	
	
	return 0;
}
