#pragma warning (disable:4996)
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>


#define minF(a,b) a<b?a:b

int arr[1000000];

int compare(void *first, void *second)
{
	if (*(int*)first > *(int*)second)
		return 1;
	else if (*(int*)first < *(int*)second)
		return -1;
	else return 0;
}


int main() {

	int n;

	scanf("%d", &n);

	//before sort
	for (int i = 0; i < n; i++) {
		scanf("%d", &arr[i]);
	}

	//apply quick sort
	qsort(arr, n, sizeof(int), compare);

	//after sort
	for (int i = 0; i < n; i++) {
		printf("%d\n", arr[i]);
	}


}