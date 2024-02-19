#include <stdio.h>
#include <math.h>

int main () {
	int t;
	scanf("%d", &t);
	for (int i = 1; i <= t; i++){
		for (int k = t - 1; k >= i; k--) printf("~");
		for (int j = 1; j <= i; j++) printf("*");
		printf("\n");
	}
    return 0;
}
