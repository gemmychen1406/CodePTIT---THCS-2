#include <stdio.h>
#include <math.h>

long long gt(long long x){
	long long gt = 1;
	for (long long i = 1; i <= x; i++){
		gt = gt * i;
	}
	return gt;
}
int strong(long long t) {
	long long h = 10, sum = 0, n = t;
	while(t*10/h){
		sum = sum + gt(t - t / h * 10);
		t = t / 10;
	}
	if (sum == n) return 1;
	return 0;
}
int main(){
	long long n;
	scanf("%lld", &n);
	for (long long i = 1; i < n; i++){
		if (strong(i)) printf("%lld ", i);
	}
}
