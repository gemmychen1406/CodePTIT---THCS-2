#include <stdio.h>
#include <math.h>

int main () {
	int n;
	long long sum = 0;
	scanf("%d", &n);
	long long s[n];
	for (int i = 0; i < n; i++){
		scanf("%lld", &s[i]);
		sum += s[i];
	}
	printf ("%.3lf", sum * 1.0 / n);
    return 0;
}
