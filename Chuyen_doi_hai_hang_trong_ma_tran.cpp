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
		if (i + 1== a)
		for (int j = 0; j < n; j++){
			printf("%d ", x[b - 1][j]);
		}
		else if (i + 1 == b)
		for (int j = 0; j < n; j++){
			printf("%d ", x[a - 1][j]);
		}
		else 
		for (int j = 0; j < n; j++){
			printf("%d ", x[i][j]);
		}
		printf("\n");
	}
    return 0;
}
