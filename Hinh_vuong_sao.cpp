#include <stdio.h>
#include <math.h>

int main () {
	int t;
	scanf("%d", &t);
	for (int i = 0; i < t; i++){
		for (int j = 0; j < t; j++){
			printf("*");
		}
		printf("\n");
	}
    return 0;
}
