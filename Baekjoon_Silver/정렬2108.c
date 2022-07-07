#pragma warning (disable:4996)
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <math.h>


#define minF(a,b) a<b?a:b

int arr[500000];
int list[8001] = { 0 };

int compare(void *first, void *second)
{
	if (*(int*)first > *(int*)second)
		return 1;
	else if (*(int*)first < *(int*)second)
		return -1;
	else return 0;
}

int median(int list[], int n)
{
	if (n == 1) return list[0];
	else return list[(n + 1) / 2 - 1];
}

int arith(int list[], int n)
{
	double sum = 0;

	for (int i = 0; i < n; i++) {
		sum += list[i];
	}
	return round(sum / n);
}

int range(int list[], int n)
{
	int max = list[n - 1];
	int min = list[0];

	return max - min;
}

int freq(int list[], int n)
{
	int arr[8001] = { 0 };
	int idx, max = 0, cnt = 0;


	for (int i = 0; i < n; i++) {
		idx = list[i] + 4000;
		arr[idx] += 1;

		if (arr[idx] > max)
			max = arr[idx];
	}

	for (int i = 0; i < 8001; i++) {
		if (arr[i] == 0) continue;
		if (arr[i] == max) {
			if (cnt == 0)
			{
				idx = i;
				cnt += 1;
			}
			else if (cnt == 1)
			{
				idx = i;
				break;
			}
		}
	}
	return idx - 4000;
}


int maxIndex() {
	int max = list[0];
	int max_index = 0;

	for (int i = 0; i < 8001; i++) {
		if (max < list[i]) {
			max_index = i;
			max = list[i];
		}
	}

	return max_index;
}

int main() {

	int n;
	int* list;

	scanf("%d", &n);
	list = (int*)calloc(n, sizeof(int));


	//before sort
	for (int i = 0; i < n; i++) {
		scanf(" %d", &list[i]);
	}

	//apply quick sort
	qsort(list, n, sizeof(list[0]), compare);





	printf("%d\n", arith(list, n));
	printf("%d\n", median(list, n));
	printf("%d\n", freq(list, n));
	printf("%d\n", range(list, n));


}