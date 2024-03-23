#include <stdio.h>
#include <math.h>
#include <string.h>

int thuannghichle(long long x){
	int a[20];
	int k = 1;
	while(x/10){
		a[k] = x % 10;
		x /= 10;
		k++;
	}
	a[k] = x;
	int sum = 0;
	for (int i = 1; i <= k/2; i++){
		if (a[i] != a[k - i + 1]) return 0;
		if (a[i] % 2 == 0) return 0;
	}
	for (int i = 1; i <= k; i++) sum +=a[i];
	if (sum %2 == 0) return 0;
	return 1;
}


int main () {
	int t;
	scanf("%d", &t);
	while(t--){
		long long n;
		scanf("%lld", &n);
		if (thuannghichle(n) == 1) printf("YES");
		else printf("NO");
		printf("\n");
	}
    return 0;
}
