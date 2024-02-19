#include <stdio.h>
#include <math.h>

int main () {
	int a, b;
	scanf("%d%d", &a, &b);
	for (int i = 1; i <= a; i++){
		printf("%d", i);
		for (int j = i + 1; j <= b; j++){
			printf("%d", j);
		}
		if (i > b) for (int k = b - 1; k >= 1; k--) printf("%d", k);
		else for (int k = i - 1; k >= 1; k--) printf("%d", k);
		printf("\n");
	}
    return 0;
}
