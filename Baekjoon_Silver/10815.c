#pragma warning (disable:4996)
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>



int compare(const void *first, const void *second)
{
	if (*(int*)first > *(int*)second)
		return 1;
	else if (*(int*)first < *(int*)second)
		return -1;
	else return 0;
}

int binary_search(int *list, int value, int start, int end) {
	int mid;

	if (start > end) return 0;
	mid = (start + end) / 2;
	if (list[mid] == value) return 1;
	else if (list[mid] > value) return binary_search(list, value, start, mid - 1);
	else return binary_search(list, value, mid + 1, end);

}

int main() {

	int n, m, value;
	int * list;
	scanf("%d", &n);

	list = (int *)malloc(sizeof(int)*n);

	for (int i = 0; i < n; i++) {
		scanf("%d", &list[i]);
	}

	qsort(list, n, sizeof(int), compare);




	scanf("%d", &m);

	for (int i = 0; i < m; i++) {
		scanf("%d", &value);
		printf("%d ", binary_search(list, value, 0, n - 1));
	}

	free(list);

	return 0;
}