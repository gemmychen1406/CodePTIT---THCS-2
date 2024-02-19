#include <stdio.h>
#include <math.h>


int main () {
	int a, b;
	scanf("%d%d", &a, &b);
	for (int i = 0; i < a; i++){
		if (a <= b) {
			for (int j = b - i; j > 0; j--) printf("%d", j);
			for (int j = 2; j <= i + 1; j++) printf("%d", j);
		}
		else {
			if (a - i > b) for (int j = a - i; j > a - i - b; j--) printf("%d", j);
			else for (int j = a - i; j >= a - b - 1; j--) printf("%d", j);
			for (int j = 2; j <= i - 1; j++) printf("%d", j);
		}
		printf("\n");
	}
    return 0;
}
