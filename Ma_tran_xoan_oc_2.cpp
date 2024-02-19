#include <stdio.h>
#include <math.h>

int main () {
	int t;
	scanf("%d", &t);
	while(t--){
		int n, m;
		scanf("%d%d", &n, &m);
		int a[n][m];
		for (int i = 0; i < n; i++){
			for (int j = 0; j < m; j++) scanf("%d", &a[i][j]);
		}
		for (int i = 0; i <= n/2; i++){
			for (int j = i; j < m - i - 1; j++){
				printf("%d ", a[i][j]);
			}
			for (int j = i; j < n - i - 1; j++){
				printf("%d ", a[j][m - i - 1]);
			}
			for (int j = i; j < m - i - 1; j++){
				printf("%d ", a[n - i - 1][m - j - 1]);
			}
			for (int j = i; j < n - i - 1; j++){
				printf("%d ", a[n - j - 1][i]); 
			}
		}
		if (n*m % 2) printf("%d ", a[n/2][m/2]);
		printf("\n");
	}
    return 0;
}
