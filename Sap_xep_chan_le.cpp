#include <stdio.h>
#include <math.h>

int main () {
	int n, x = 0, y = 0;
	scanf("%d", &n);
	int a[n], c[n], l[n];
	for (int i = 0; i < n; i++){
		scanf("%d", &a[i]);
		if (a[i] % 2) l[y++] = a[i];
		else c[x++] = a[i];
	}
	for (int i = 0; i < x; i++) {
		for (int j = i + 1; j < x; j++){
			if (c[i] > c[j]){
				int h = c[i];
				c[i] = c[j];
				c[j] = h;
			}
		}
		printf("%d ", c[i]);
	}
	for (int i = 0; i < y; i++) {
		for (int j = i + 1; j < y; j++){
			if (l[i] > l[j]){
				int h = l[i];
				l[i] = l[j];
				l[j] = h;
			}
		}
		printf("%d ", l[i]);
	}
    return 0;
}
