#include <stdio.h>
#include <math.h>
#include <string.h>

int main () {
	int t;
	scanf("%d", &t);
	while(t--){
		long long x1, x2;
		scanf("%lld%lld", &x1, &x2);
		long long h = 10, min1 = 0, min2 = 0,  max1 = 0, max2 = 0, a1 = 1, a2 = 1;
		while (x1*10/h){
			int k = x1 - x1/h * 10;
			if (k == 5) {
				max1 = 6*a1 + max1;
				min1 = 5*a1 + min1;
			}
			else if (k == 6){
				max1 = 6*a1 + max1;
				min1 = 5*a1 + min1;
			}
			else {
				max1 = k*a1 + max1;
				min1 = k*a1 + min1;
			}
			x1 = x1/10;
			a1 *= 10;
		}
		while (x2*10/h){
			int k = x2 - x2/h * 10;
			if (k == 5) {
				max2 = 6*a2 + max2;
				min2 = 5*a2 + min2;
			}
			else if (k == 6){
				max2 = 6*a2 + max2;
				min2 = 5*a2 + min2;
			}
			else {
				max2 = k*a2 + max2;
				min2 = k*a2 + min2;
			}
			x2 = x2/10;
			a2 *= 10;
		}
		printf("%lld %lld\n", min1 + min2, max1 + max2);
	}
    return 0;
}
