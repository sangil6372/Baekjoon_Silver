#pragma warning (disable:4996)
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <math.h>



#define minF(a,b) a<b?a:b

int compare(void *first, void *second)
{
	if (*(int*)first > *(int*)second)
		return 1;
	else if (*(int*)first < *(int*)second)
		return -1;
	else return 0;
}



int main() {

	char n[10];
	int tmp;
	scanf("%s", n);

	
	
	for (int i = 0; i < strlen(n) - 1; i++) {
		for (int j = 0; j < strlen(n); j++) {
			if (n[j] < n[j + 1]) {
				tmp = n[j];
				n[j] = n[j + 1];
				n[j + 1] = tmp;
			}
		}
	}

	printf("%s", n);
	
}