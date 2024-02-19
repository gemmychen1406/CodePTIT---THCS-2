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
void in(int a[100][100], int n, int m){
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < m; j++)
		printf("%d ", a[i][j]);
		printf("\n");
	}
	
}
int main () {
	int m, n, p, q;
	scanf("%d%d%d%d", &m, &n, &p, &q);
	int a[100][100], b[100][100], c[100][100], ab[100][100], d[100][100];
	nhap(a,m,n); nhap(b,n,p); nhap(c,p,q);
	nhan(a,b,ab,m,n,p);
	nhan(ab,c,d,m,p,q);
	in(d,m,q);
    return 0;
}
