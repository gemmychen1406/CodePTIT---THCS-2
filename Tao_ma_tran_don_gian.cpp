#include <stdio.h>
#include <math.h>
#include <string.h>

int main () {
	int n;
	scanf("%d", &n);
	for (int i = 0; i < n; i++){
		for (int j = 0; j < n; j++){
			if (j - i > 0)printf("%d ", j - i);
			else printf("0 ");
		}
		printf("\n");
	}
    return 0;
}