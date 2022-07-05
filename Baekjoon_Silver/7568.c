#pragma warning (disable:4996)
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>

#define minF(a,b) a<b?a:b



int main(void) {


	int n, m;
	int min = 80;
	int cnt1 = 0;
	int	cnt2 = 0;

	char arr[50][50];


	scanf("%d %d", &n, &m);

	for (int i = 0; i < n; i++) {
		scanf("%s", &arr[i]);
	}

	for (int i = 0; i < (n - 8) + 1; i++) {
		for (int j = 0; j < (m - 8) + 1; j++) {
			cnt1 = 0;
			cnt2 = 0;

			for (int a = i; a < i + 8; a++) {
				for (int b = j; b < j + 8; b++) {

					if ((a + b) % 2 == 0) {
						if (arr[a][b] == 'W') {
							cnt1++;
						}
						else if (arr[a][b] == 'B') {
							cnt2++;
						}
					}
					else {
						if (arr[a][b] == 'B') {
							cnt1++;
						}
						else if (arr[a][b] == 'W') {
							cnt2++;
						}
					}

				}
			}
			min = minF(min, cnt1);
			min = minF(min, cnt2);
		}
	}
	printf("%d", min);


	return 0;
}