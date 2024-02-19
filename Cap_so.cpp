#include <stdio.h>
#include <math.h>

int ucln(int x, int y){
	if (x < y){
		int k = x;
		x = y;
		y = k;
	}
	if (x % y==0) return y;
	return ucln(x - y, y);
}

int main () {
	int t;
	scanf("%d", &t);
	while(t--){
		int a, b, c, d;
		scanf("%d%d%d%d", &a, &b, &c, &d);
		if (ucln(a,b) == ucln(c,d)) printf("YES\n");
		else printf("NO\n");
	}
    return 0;
}
