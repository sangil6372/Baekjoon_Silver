#pragma warning (disable:4996)
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>


int arr[10001] = { 0, };

int main(void) {

	int rep;
	int n;

	arr[1] = 1;

	for (int i = 2; i <= 10000; i++) {
		for (int j = 2; i * j <= 10000; j++) {
			arr[i*j] = 1;
		}
	}
	// 소수를 담은 배열 완성


	scanf("%d", &rep);

	for (int i = 0; i < rep; i++) {
		scanf("%d", &n);
		for (int j = 0; j < n; j++) {
			if (arr[n / 2 - j] == 0 && arr[n - (n / 2 - j)] == 0) {
				printf("%d %d\n", n / 2 - j, n - (n / 2 - j));
				break;
			}
		}

	}

	return 0;
}