#pragma warning (disable:4996)
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>




int main(void) {
	

	int n;
	int arr[50][2];
	int cnt;


	scanf("%d", &n);

	for (int i = 0; i < n; i++) {
		scanf("%d %d", &arr[i][0], &arr[i][1]);
	}
	
	for (int i = 0; i < n; i++) {
		cnt = 1; //자기 자신
		for (int j = 0 ; j < n; j++) {
			if ((arr[i][0] < arr[j][0]) && (arr[i][1] < arr[j][1]))
				cnt++;
		}
		printf("%d ", cnt);
	}


	return 0;
}