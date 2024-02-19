#include <stdio.h>
#include <math.h>

int snt(long long a){
	if (a < 2 || a == 4) return 0;
	if (a == 2 || a == 3 || a == 5) return 1;
	if (a > 5) {
		for (long long i = 2; i * i <= a; i++)
			if (a%i == 0) return 0;
	}
	return 1;
}
int main () {
	int n;
	scanf("%d", &n);
	long long a[n][n];
	for (int i = 0; i < n; i++)
	for (int j = 0; j < n; j++)
	scanf("%lld", &a[i][j]);
	long long sum = 0;
	for (int i = 0; i < n; i++){
		for (int j = i; j < n; j++){
			if (snt(a[i][j]) == 1) {
				sum+= a[i][j];
				//printf("%lld ", a[i][j]);
			}
		}
	}
	printf("%lld", sum);
    return 0;
}
