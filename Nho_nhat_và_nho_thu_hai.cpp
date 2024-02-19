#include <stdio.h>
#include <math.h>
#include <string.h>

int main () {
	int n, min1, min2;
	scanf("%d", &n);
	int a[n];
	for (int i = 0; i < n; i++){
		scanf("%d", &a[i]);
	}
	min1 = a[0];
	for (int i = 1; i < n; i++){
		if (min1 > a[i]) min1 = a[i];
	}
	min2 = 99;
	for (int i = 0; i < n; i++){
		if (min2 > a[i] && a[i] > min1) min2 = a[i];
	}
	printf("%d %d", min1, min2);
    return 0;
}
