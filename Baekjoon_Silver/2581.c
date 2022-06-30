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


	int startNum, endNum;
	int minDec, flag=0;
	int sum=0;
	

	scanf("%d %d", &startNum, &endNum);

	for (int i = startNum; i <= endNum; i++) {
		if (find_Decimal_Number(i) == 1) {
			if (flag == 0) {
				minDec = i;
				flag++;
			}
			sum += i;
		}
	}
	if (flag == 0) {
		printf("-1");
	}
	else printf("%d\n%d", sum, minDec);
	
}