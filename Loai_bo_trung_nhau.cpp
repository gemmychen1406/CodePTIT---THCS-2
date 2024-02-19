#include <stdio.h>
#include <math.h>

int main () {
	int n, k = 0;
	scanf("%d", &n);
	int a[n], b[n];
	for (int i = 0; i < n; i++){
		scanf("%d", &a[i]);
		if (i == 0) b[0] = a[0];
		else {
			int h = 0;
			for (int j = 0; j <= k; j++){
				if (a[i] == b[j]) {
					h = 1;
					break;
				}
			}
			if (h == 0) {
				k++;
				b[k] = a[i];
			}
		}
	}
	for (int i = 0; i <= k; i++){
		printf("%d ", b[i]);
	}
    return 0;
}
