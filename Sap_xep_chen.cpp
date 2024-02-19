#include <stdio.h>
#include <math.h>
#include <string.h>

int main () {
	int n;
	scanf("%d", &n);
	int a[n];
	for (int i = 0; i < n; i++){
		scanf("%d", &a[i]);
		for (int j = 0; j < i; j++){
			if (a[i] < a[j]){
				int k = a[i];
				a[i] = a[j];
				a[j] = k;
			}
		}
		printf("Buoc %d: ", i);
		for (int j = 0; j <= i; j++){
			printf("%d ", a[j]);
		}
		printf("\n");
	}
    return 0;
}
