#include <stdio.h>
#include <math.h>
#include <string.h>

int ucln(int x, int y){
	if (x < y){
		int k = x;
		x = y;
		y = k;
	}
	if (x % y == 0) return y;
	return ucln(x - y, y);
}

int main () {
	int a, b;
	scanf("%d%d", &a, &b);
	for (int i = a; i <= b; i++){
		for (int j = a; j <= b; j++){
			if (i < j && ucln(i, j) == 1) printf("(%d,%d)\n", i, j);
		}
	}
    return 0;
}
