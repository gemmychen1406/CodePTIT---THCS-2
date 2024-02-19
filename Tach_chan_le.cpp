#include <stdio.h>
#include <math.h>
#include <string.h>

int main () {
	int n;
	scanf("%d", &n);
	int a[n], c[n], l[n];
	int cd = 0, ld = 0;
	for (int i = 0; i < n; i++){
		scanf("%d", &a[i]);
		if (a[i] % 2 == 0) c[cd++] = a[i];
		else l[ld++] = a[i];
	}
	for (int i = 0; i < cd; i++){
		printf("%d ", c[i]);
	}
	printf("\n");
	for (int i = 0; i < ld; i++){
		printf("%d ", l[i]);
	}
	printf("\n");
    return 0;
}
