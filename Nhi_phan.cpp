#include <stdio.h>
#include <math.h>
#include <string.h>

int main () {
	int a;
	scanf("%d", &a);
	int x = 1;
	int sum = 0;
	while(a/2){
		sum += x * (a % 2);
		a /= 2;
		x = x * 10;
	}
	if (a%2) {
		sum += x * (a % 2);
	}
	printf("%d", sum);
    return 0;
}
