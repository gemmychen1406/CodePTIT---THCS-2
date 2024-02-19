#include <stdio.h>
#include <math.h>

int main () {
	long long a, b, a1, b1;
	scanf("%lld%lld", &a, &b);
	a1 = (long long) sqrt(a);
	b1 = (long long) sqrt(b);
	if (a1 < sqrt(a)) a1 = a1 + 1;
	printf("%lld\n", b1 - a1 + 1);
	for (long long i = a1; i <= b1; i++){
		printf("%lld\n", i*i);
	}
    return 0;
}
