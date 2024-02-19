#include <stdio.h>
#include <math.h>

int main () {
	long long a, b;
	scanf("%lf%lf", &a, &b);
	if (a != 0) {
		printf("%.2lf", (- b)/a);
	}
	else if (a == 0 && b == 0) {
		printf("Vo so nghiem");
	}
	else printf("Vo nghiem");	
    return 0;
}
