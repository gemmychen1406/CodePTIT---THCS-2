#include <stdio.h>
#include <math.h>
#include <string.h>

int ucln(int a, int b){
	if (b % a == 0) return a;
	else {
		if (a >= b - a) ucln(b - a, a);
		else ucln (a, b - a);
	}
}
int main () {
	int t;
	scanf("%d", &t);
	while(t--){
		int a, b;
		scanf("%d%d", &a, &b);
		if (a >= b) printf("%d", ucln(b,a));
		else printf("%d", ucln(a,b));
		printf("\n");
	}
    return 0;
}
