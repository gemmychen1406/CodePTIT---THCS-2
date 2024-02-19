#include <stdio.h>
#include <math.h>
#include <string.h>
int sumH[10] = {};
int sumC[10] = {};
int main () {
	int t, x = 1;
	scanf("%d", &t);
	while(t--){
		int m, n;
		scanf("%d%d", &n, &m);
		int a[n][m];
		int maxH = 0, maxC = 0;
		for (int i = 0; i < n; i++){
			sumH[i] = 0;
			for (int j = 0; j < m; j++){
				scanf("%d", &a[i][j]);
				sumH[i] += a[i][j];
			}
			if (sumH[i] > maxH) {
				maxH = sumH[i];
			}
		}

		for (int i = 0; i < n; i++){
			if (sumH[i] == maxH) for (int j = 0; j < m; j++) a[i][j] = 0;
		}
		for (int i = 0; i < m; i++){
			sumC[i] = 0;
			for (int j = 0; j < n; j++){
				sumC[i] += a[j][i];
			}
			if (sumC[i] > maxC){
				maxC = sumC[i];
			}
		}
		for (int i = 0; i < m; i++){
			if (sumC[i] == maxC) for (int j = 0; j < n; j++) a[j][i] = 0;
		}
		printf("Test %d:\n", x);
		x++;
		for (int i = 0; i < n; i++){
			if (sumH[i] == maxH) continue;
			for (int j = 0; j < m; j++){
				if (sumC[j] == maxC) continue;
				printf("%d ", a[i][j]);
			}
			printf("\n");
		}
	}
    return 0;
}
