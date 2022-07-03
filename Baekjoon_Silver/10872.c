#pragma warning (disable:4996)
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>


int arr[2500001] = { 0, };

int main(void) {
	int n;
	int sum;

	arr[1] = 1;

	scanf("%d", &n);

	while (n!=0) {
		for (int i = 2; i <= 2 * n; i++) {
			for (int j = 2; i * j <= 2 * n; j++) {
				arr[i*j] = 1;
			}
		}
		sum = 0;
		for (int i = n + 1; i <= 2 * n; i++) {
			sum += arr[i];
		}
		printf("%d\n", n - sum);
		scanf("%d", &n);
	}

	return 0;
}