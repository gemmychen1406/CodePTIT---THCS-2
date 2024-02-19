#include <stdio.h>
#include <math.h>

int main () {
	int t, x = 1;
	scanf("%d", &t);
	while(t--){
		int n;
		scanf("%d", &n);
		int a[n][n];
		int k = n*n;
		for (int i = 0; i <= n/2; i++){
			for (int j = i; j < n - i - 1; j++){
				a[i][j] = k--;
			}
			for (int j = i; j < n - i - 1; j++){
				a[j][n - i - 1] = k--;
			}
			for (int j = i; j < n - i - 1; j++){
				a[n - i - 1][n - j - 1] = k--;
			}
			for (int j = i; j < n - i - 1; j++){
				a[n - j - 1][i] = k--; 
			}
		}
		
		if (n % 2) a[n/2][n/2] = k;
		printf("Test %d:\n", x); x++;
		for (int i = 0; i < n; i++){
			for (int j = 0; j < n;  j++){
				printf("%d ", a[i][j]);
			}
			printf("\n");
		}
	}
    return 0;
}
