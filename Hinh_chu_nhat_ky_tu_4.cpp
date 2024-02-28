#include <stdio.h>
#include <math.h>
#include <string.h>

int main () {
	int a, b;
	scanf("%d%d", &a, &b);
	char x = 'A';
	for (int i = a; i > 0; i--){
		for (int j = b; j > 0; j --){
			if (i >= j) printf("%c", x + b - 1);
			else printf("%c", x + b - j + i - 1);
		}
		printf("\n");
	}
    return 0;
}
