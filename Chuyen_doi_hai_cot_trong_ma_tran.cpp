#include <stdio.h>
#include <math.h>

int main () {
	int m, n, a, b;
	scanf("%d%d", &m, &n);
	int x[m][n];
	for (int i = 0; i < m; i++){
		for (int j = 0; j < n; j++){
			scanf("%d", &x[i][j]);
		}
	}
	scanf("%d%d", &a, &b);
	for (int i = 0; i < m; i++){
		for (int j = 0; j < n; j++){
			if (j + 1 == a) printf("%d ", x[i][b - 1]);
			else if (j + 1 == b) printf("%d ", x[i][a - 1]);
			else printf("%d ", x[i][j]);
		}
		printf("\n");
	}
    return 0;
}
