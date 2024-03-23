#include <stdio.h>
#include <math.h>

int check_snt(long long x) {
	if (x <= 5){
		if (x == 2 || x == 3 || x == 5) return 1;
		else return 0;
	}
	else {
		for (int i = 2; i <= sqrt(x); i++){
			if (x % i == 0) return 0;
		}
	}
	return 1;
}

int main () {
	int t;
	scanf("%d", &t);
	while(t--){
		long long n;
		scanf("%lld", &n);
		if (check_snt(n)) printf("YES");
		else printf("NO");
		printf("\n");
	}
    return 0;
}
