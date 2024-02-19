#include <stdio.h>
#include <math.h>
#include <string.h>

int main () {
	double a, b, c;
	scanf("%lf%lf%lf", &a, &b, &c);
	if (a == 0){
		if (b == 0) printf("NO");
		else printf("%.2lf", -c/b);
	}
	else{
		if (b*b < 4*a*c) printf("NO");
		else if (b*b == 4*a*c) printf("%.2lf", -b/(2*a));
		else printf("%.2lf %.2lf", (- b + sqrt(b*b - 4*a*c))/(a * 2), (- b - sqrt(b*b - 4*a*c))/(a * 2));
	}
    return 0;
}
