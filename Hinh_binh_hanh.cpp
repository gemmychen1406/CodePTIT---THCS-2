#include <stdio.h>
#include <math.h>

int main () {
	int t;
	scanf("%d", &t);
	for (int i = 1; i <= t; i++){
		for (int j = t - i - 1; j >= 0; j--) printf("~");
		for (int k = 0; k < t; k++) printf("*");
		printf("\n");	
	}
    return 0;
}
