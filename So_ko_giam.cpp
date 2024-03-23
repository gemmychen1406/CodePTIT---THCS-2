#include <stdio.h>
#include <math.h>

int main () {
	int t;
	scanf("%d", &t);
	while(t--){
		long long n, x = 0;
		scanf("%lld", &n);
		long long h = 10, a1, a2;
		while(n / h && x == 0){
			a1 = n - n / h * 10;
			a1 = n - n / h * 10;
			n /= 10;
			a2 = n - n / h * 10; 
			if (a1 < a2) x = 1;
		}
		if (x == 1) printf("NO");
		else printf("YES");
		printf("\n");
	}
    return 0;
}
