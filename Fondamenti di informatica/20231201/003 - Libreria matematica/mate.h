float potenza(int b, int e) {
	int i;
	float pow;
	
	pow = 1.0f;
	
	if (e >= 0) {
		for (i = 0; i < e; i++) {
			pow *= b;
		}
	}
	else {
		for (i = 0; i < -e; i++) {
			pow *= 1.0 / b;
		}
	}
	
	return pow;
}

int mcd(int a, int b) {
	int resto;
	
	do {
		resto = a % b;
		
		if (resto != 0) {
			a = b;
			b = resto;
		}
	} while(resto != 0);
	
	return b;
}
