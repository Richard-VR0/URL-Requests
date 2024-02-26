#include <stdio.h>

int main() {
	int *pPtr = NULL, *qPtr = NULL, *rPtr = NULL;
	int x = 1, y = 5;
	
	pPtr = &x;		
	qPtr = &x;
	rPtr = &y;
	
	*pPtr = *pPtr * 3 + 1;
	
	qPtr = rPtr;
	
	printf(" %d, %d, %d ", *pPtr, *qPtr, *rPtr);

	*rPtr = *qPtr;
	rPtr = pPtr;
	pPtr = qPtr;
	printf(" %d, %d, %d ", *pPtr, *qPtr, *rPtr);
	
	return 0;
}
