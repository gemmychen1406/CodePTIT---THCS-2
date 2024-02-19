#include <stdio.h>
#include <math.h>
#include <string.h>
void nhap(int a[100][100], int n, int m){
	for (int i = 0; i < n; i++) 
	for (int j = 0; j < m; j++)
	scanf("%d", &a[i][j]);
}
void nhan(int x[100][100], int y[100][100], int z[100][100], int h1, int h2, int h3){
	for (int i = 0; i < h1; i++) 
	for (int j = 0; j < h3; j++){
		z[i][j] = 0;
		for (int k = 0; k < h2; k++){
			z[i][j] += x[i][k] * y[k][j];
		}
	}
}
void cv(int x[100][100], int y[100][100], int m, int n){
	for (int i = 0; i < m; i++){
		for (int j = 0; j < n; j++){
			y[i][j] = x[j][i];
		}
	}
}
void in(int a[100][100], int n, int m){
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < m; j++)
		printf("%d ", a[i][j]);
		printf("\n");
	}
	
}
int main () {
	int t, x = 1;
	scanf("%d", &t);
	while(t--){
		int m, n;
		scanf("%d%d", &n, &m);
		int a[100][100], b[100][100], c[100][100];
		nhap(a,n,m);
		cv(a,b,m,n);
		nhan(a,b,c,n,m,n);
		printf("Test %d:\n", x);
		x++;
		in(c,n,n);
	}
    return 0;
}
