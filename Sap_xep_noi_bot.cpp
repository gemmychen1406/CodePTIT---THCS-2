#include <stdio.h>
#include <math.h>

int main () {
	int n;
	scanf("%d", &n);
	int a[n];
	for (int i = 0; i < n; i++){
		scanf("%d", &a[i]);
	}
	for (int j = 0; j < n; j++){
		int x = 0;
		for (int i = 0; i < n - 1; i++){
			if (a[i] > a[i + 1]){
				int t = a[i];
				a[i] = a[i + 1];
				a[i + 1] = t;
				x = 1;
			}
		}
		if (x == 0) break;
		printf("Buoc %d: ", j + 1);
		for (int i = 0; i < n; i++) printf("%d ", a[i]);
		printf("\n");
	}
    return 0;
}
