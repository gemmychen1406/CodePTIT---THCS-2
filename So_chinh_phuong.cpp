#include <stdio.h>
#include <math.h>

int main () {
	int t;
	scanf("%d", &t);
	while(t--){
		long long n;
		scanf("%lld", &n);
		if (sqrt(n) == (long long)sqrt(n)) printf("YES");
		else printf("NO");
		printf("\n");
	}
	return 0;
}
