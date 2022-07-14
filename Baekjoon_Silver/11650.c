#pragma warning (disable:4996)
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#define minF(a,b) a<b?a:b

typedef struct {
	int x;
	int y;
}coord;


int compare(const void *first, const void *second)
{
	coord A = *(coord*)first;
	coord B = *(coord*)second;

	if (A.y > B.y) return 1;
	else if (A.y == B.y) {
		if (A.x > B.x) return 1;
		else return -1;
	}
	return -1;
}



int main() {

	int n;
	coord *arr ;
	scanf("%d", &n);


	arr = (coord*)malloc(sizeof(coord)*n);

	for (int i = 0; i < n; i++) {
		scanf("%d %d", &arr[i].x, &arr[i].y);
	}

	qsort(arr, n, sizeof(coord), compare);


	for (int i = 0; i < n; i++) {
		printf("%d %d\n", arr[i].x, arr[i].y);
	}
}