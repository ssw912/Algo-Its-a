#include <stdio.h>

void Move (int n, int from, int to) {
	
	int mid = 6 - from - to;
	
	// Á¾·á 
	if (n == 1) {
		printf("%d %d \n", from, to);
	}
	
	if (n >= 2) {
		Move(n-1, from, mid);
		Move(1, from, to);	// ¸Ç ¹ØÆÇÀ» ±ò¾ÆÁÖ±â. 
		Move(n-1, mid, to);
	}
}

// N = 1 > 1
// N = 2 > 3
// N = 3 > 7
// N = 4 > 15
// N = k > 2^k - 1

int main(void) {
	
	int n = 0;
	
	scanf("%d", &n);
	
	printf("%d \n", (1 << n) - 1);
	Move(n, 1, 3);
	return 0;
}
