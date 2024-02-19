#include <stdio.h>
#include <math.h>

int main () {
	int n;
	scanf("%d", &n);
	int a[n][n];
	for (int i = 0; i < n; i++){
		for (int j = 0; j < n; j++){
			scanf("%d", &a[i][j]);
		}
	}
	for (int i = 0; i < n; i++){
		for (int j = 0; j < n; j++){
			if (j - i == 0 || j + i == n - 1) printf("%d ", a[i][n - 1 - j]);
			else printf("%d ", a[i][j]);
		}
		printf("\n");
	}
    return 0;
}
