#pragma warning (disable:4996)
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int find_Decimal_Number(int number) {
	int cnt = 0;
	
	for (int i = 1; i <= number; i++) {
		if (number%i == 0) cnt++;
	}

	if (cnt != 2) return 0;
	else if (cnt == 2) return 1;  // 소수라면
}


int main() {

	int n;
	int number;
	int sum =0 ;

	scanf("%d", &n);

	for (int i = 0; i < n; i++) {
		scanf("%d", &number);
		sum += find_Decimal_Number(number);
	}

	printf("%d", sum);
}