#include <stdio.h>
#include <math.h>

int main () {
	long long n;
	scanf("%lld", &n);
	int h = 10, sum = 0;
	while (n * 10 / h) {
		sum = n - (n / h) * 10 + sum;
		n = n / 10;
	}
	printf("%lld", sum);
    return 0;
}
