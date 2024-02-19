#include <stdio.h>
#include <math.h>
#include <string.h>

int main () {
	int n, max1 = 0, max2 = 0;
	scanf("%d", &n);
	int a[n];
	for (int i = 0; i < n; i++){
		scanf("%d", &a[i]);
		if (a[i] > max1) max1 = a[i];
	}
	for (int i = 0; i < n; i++){
		if (a[i] > max2 && a[i] < max1) max2 = a[i];
	}
	printf("%d %d", max1, max2);
    return 0;
}
