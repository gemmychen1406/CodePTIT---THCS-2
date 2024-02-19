#include <stdio.h>
#include <math.h>

int main () {
	int t;
	scanf("%d", &t);
	while(t--){
		long long n;
		scanf("%lld", &n);
		int h = 10, sum = 0;
		while (n * 10 / h) {
			sum = n - (n / h) * 10 + sum;
			n = n / 10;
		}
		printf("%lld\n", sum);
	}
    return 0;
}
