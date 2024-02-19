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
	long long a, b;
	scanf("%lld %lld", &a, &b);
	printf("%lld\n%lld", ucln(a, b), bcnn(a, b));
    return 0;
}
