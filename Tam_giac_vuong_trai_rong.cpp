#include <stdio.h>
#include <math.h>

int main () {
	int t;
	scanf("%d", &t);
	for (int i = 1; i <= t; i++){
		for (int j = 1; j <= i; j++) {
			if (i == 1|| j == 1|| j == i || i == t) printf("*");
			else printf(".");
		}
		printf("\n");
	}
    return 0;
}
