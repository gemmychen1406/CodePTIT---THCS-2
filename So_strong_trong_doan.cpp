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
	long long a, b;
	scanf("%lld%lld", &a, &b);
	if (a > b){
		long long k = a;
		a = b;
		b = k;
	}
	for (long long i = a; i <= b; i++){
		if (strong(i)) printf("%lld ", i);
	}
}
