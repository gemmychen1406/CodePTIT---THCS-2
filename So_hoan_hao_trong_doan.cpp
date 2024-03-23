#include <stdio.h>
#include <math.h>

int shh(int x){
	int sum = 1;
	for (int i = 2; i * i <= x; i++){
		if (x % i == 0) sum += i + x/ i;
	}
	return sum;
}

int main () {
	int a, b;
	scanf("%d%d", &a, &b);
	if (a > b){
		int k = a;
		a = b;
		b = k;
	}
	for (int i = a; i <= b; i++){
		if (i == 1) continue;
		if (shh(i) == i) printf("%d ",  i);
	}
    return 0;
}
