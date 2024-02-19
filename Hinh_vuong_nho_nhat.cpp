#include <stdio.h>
#include <math.h>

int max(int x, int y){
	if (x >= y) return x;
	return y;
}

int min(int x, int y){
	if (x <= y) return x;
	return y;
}


int main () {
	int a1, b1, c1, d1, a2, b2, c2, d2;
	scanf("%d%d%d%d%d%d%d%d", &a1, &b1, &c1, &d1, &a2, &b2, &c2, &d2);
	int h = abs(max(c1,c2) - min(a1,a2));
	int k = abs(max(d1,d2) - min(b1,b2));
	printf("%d", max(h,k) * max(h,k));
    return 0;
}
