#include <stdio.h>
#include <math.h>
#include <string.h>

int main () {
	int t, x = 1;
	scanf("%d", &t);
	while(t--){
		int n;
		scanf("%d", &n);
		int a[n], b[n];
		for (int i = 0; i < n; i++) {
			scanf("%d", &a[i]);
			for (int j = 0; j < i; j++){
				if (a[i] < a[j]){
					int k = a[i];
					a[i] = a[j];
					a[j] = k;
				}
			}
		}
		for (int i = 0; i < n; i++) {
			scanf("%d", &b[i]);
			for (int j = 0; j < i; j++){
				if (b[i] > b[j]){
					int k = b[i];
					b[i] = b[j];
					b[j] = k;
				}
			}
		}
		printf("Test %d:\n", x);
		for (int i = 0; i < n; i++){
			printf("%d %d ", a[i], b[i]);
		}
		printf("\n");
		x++;
	}
    return 0;
}
