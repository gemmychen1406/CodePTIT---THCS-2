#include <stdio.h>
#include <math.h>

int main () {
	int x, t;
	scanf("%d%d", &x, &t);
	for (int i = 1; i <= x; i++){
		for (int j = 0; j < i - 1; j++) printf("~");
		for (int k = 0; k < t; k++) {
			if (i == 1|| k == 0|| k == t - 1|| i == x) printf("*");
			else printf(".");
		}
		printf("\n");	
	}
    return 0;
}
