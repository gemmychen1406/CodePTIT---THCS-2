#include <stdio.h>
#include <math.h>

int ucln(long long x, long long y){
	if (x < y){
		int k = x;
		x = y;
		y = k;
	}
	if (x % y == 0) return y;
	return ucln(x - y, y);
}
long long bcnn(long long x, long long y){
	return x * y / ucln(x, y);
}
int main () {
	int t;
	scanf("%d", &t);
	while(t--){
		long long a, b;
		scanf("%lld %lld", &a, &b);
		printf("%lld %lld\n", bcnn(a, b), ucln(a, b));
	}
	
    return 0;
}
