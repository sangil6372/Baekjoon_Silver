#pragma warning (disable:4996)
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <math.h>


#define minF(a,b) a<b?a:b

void hanoi_tower(int n, char from, char tmp, char to) {
	if (n == 1) {
		printf("%c %c\n", from, to);
	}
	else {
		hanoi_tower(n - 1, from, to, tmp);
		printf("%c %c\n", from, to);
		hanoi_tower(n - 1, tmp, from, to);
	}
}



int main() {
	int n;
	scanf("%d", &n);

	printf("%.0f\n", pow(2.0, (double)n) - 1);
	hanoi_tower(n, '1', '2', '3');

	return 0;
}