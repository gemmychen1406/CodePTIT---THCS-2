#include <stdio.h>
#include <math.h>

int main () {
	long long n;
	scanf("%lld", &n);
	int h = 10, mul = 1;
	while (n * 10 / h) {
		mul = (n - (n / h) * 10) * mul;
		n = n / 10;
	}
	printf("%lld", mul);
    return 0;
}
