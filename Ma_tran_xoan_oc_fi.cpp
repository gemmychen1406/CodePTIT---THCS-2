#include <stdio.h>
#include <math.h>
#include <string.h>
long long fi(long long x){
	if (x == 1) return 0;
	if (x == 2) return 1;
	if (x > 2) return fi(x - 1) + fi(x - 2);
}
int main () {
	int n;
	scanf("%d", &n);
	int a[n][n];
	int k = 1;
	for (int i = 0; i <= n/2; i++){
		for (int j = i; j < n - i - 1; j++){
			a[i][j] = fi(k++);
		}
		for (int j = i; j < n - i - 1; j++){
			a[j][n - i - 1] = fi(k++);
		}
		for (int j = i; j < n - i - 1; j++){
			a[n - i - 1][n - j - 1] = fi(k++);
		}
		for (int j = i; j < n - i - 1; j++){
			a[n - j - 1][i] = fi(k++); 
		}
	}
	
	if (n % 2) a[n/2][n/2] = fi(k);
	
	for (int i = 0; i < n; i++){
		for (int j = 0; j < n;  j++){
			printf("%d ", a[i][j]);
		}
		printf("\n");
	}
    return 0;
}
