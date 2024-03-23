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
	int t;
	scanf("%d", &t);
	for (int i = 1; i < t; i++){
		if (shh(i) == i) printf("%d ",  i);
	}
    return 0;
}
