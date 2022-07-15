#pragma warning (disable:4996)
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#define minF(a,b) a<b?a:b

//strcmp(a,b) a<b -> return >0 

typedef struct t_Word {
	int len;
	char arr[51];
}Word;


int compare(const void *first, const void *second) {
	Word *a = (Word*)first;
	Word *b = (Word*)second;

	if (a->len < b->len) return -1;
	else if (a->len > b->len) return 1;
	else if (a->len == b->len) {
		if (strcmp(a->arr, b->arr) < 0) return -1;
		else return 1;
	}
}




int main() {

	int n;

	scanf("%d", &n);

	Word *arr;

	arr = (Word*)malloc(sizeof(Word)*n);

	for (int i = 0; i < n; i++) {
		scanf("%s", arr[i].arr);
		arr[i].len = strlen(arr[i].arr);
		// 중복 제거 
		for (int j = 0; j < i; j++) {
			if (strcmp(arr[i].arr, arr[j].arr) == 0) {
				i -= 1;
				n -= 1;
				break;
			}
		}
	}

	qsort(arr, n, sizeof(Word), compare);

	for (int i = 0; i < n; i++) {
		printf("%s\n", arr[i].arr);
	}
}