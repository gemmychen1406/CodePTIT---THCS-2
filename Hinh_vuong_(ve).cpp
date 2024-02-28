#include <stdio.h>
#include <math.h>
#include <string.h>
int max(int x, int y){
	if (x > y) return x;
	return y;
}
int main () {
	int n;
	scanf("%d", &n);
	for (int i = - n + 1; i < n; i++){
		for (int j = - n + 1; j < n; j++){
			printf("%d", max(abs(i), abs(j)) + 1);
		}
		printf("\n");
	}
    return 0;
}
