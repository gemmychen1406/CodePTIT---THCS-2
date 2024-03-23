#include <stdio.h>
#include <math.h>


int main () {
	int n;
	scanf("%d", &n);
	for (int i = 1; i <= n; i++){
		for (int j = - i + 1 ; j <= i - 1; j++){
			printf("%d", (- abs(j) + abs(i))*2);
		}
		printf("\n");
	}
    return 0;
}
