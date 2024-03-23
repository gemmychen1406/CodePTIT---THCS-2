#include <stdio.h>
#include <math.h>

long long gt(long long x){
	long long gt = 1;
	for (long long i = 1; i <= x; i++){
		gt = gt * i;
	}
	return gt;
}
int strong(int x){
	int sum = 0;
	int t;
	while (x){
		t = x%10;
		x /= 10;
		sum += gt(t);
	}
	return sum;
}
int main () {
	long long n;
	scanf("%lld", &n);
//	long long h = 10, sum = 0, n = t;
//	while(t*10/h){
//		sum = sum + gt(t - t / h * 10);
//		t = t / 10;
//	}
	if (strong(n) == n) printf("1");
	else printf("0");
    return 0;
}
