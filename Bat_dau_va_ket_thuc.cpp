#include <stdio.h>
#include <math.h>

int main () {
	int t;
	scanf("%d", &t);
	while(t--){
		long long n;
		scanf("%lld", &n);
		long long i = 10, c = n - n / 10 * 10;
		while (n / i) {
			n = n / 10;
		}
		if (n == c) printf("YES\n");
		else printf("NO\n");
	}
    return 0;
}
