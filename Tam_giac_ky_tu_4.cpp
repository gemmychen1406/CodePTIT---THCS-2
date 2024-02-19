#include <stdio.h>
#include <math.h>
#include <string.h>

int main () {
	int n;
	scanf("%d", &n);
	int a = '@';
	for (int i = 0; i < n; i++){
		for (int j = - i; j <= i; j++){
			printf("%c", a + 2 * (i - abs(j)));
		}
		printf("\n");
	}
    return 0;
}
