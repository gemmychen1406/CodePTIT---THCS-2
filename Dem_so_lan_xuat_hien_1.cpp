#include <stdio.h>
#include <math.h>
#include <string.h>
int b[100] = {};
int main () {
	int n, x, k = 0;
	scanf("%d", &n);
	int a[n];
	for (int i = 0; i < n; i++){
		scanf("%d", &x);
		int check = 0;
		for (int j = 0; j < k; j++){
			if (x == a[j]) {
				check = 1;
				b[j]++;
			}
		}
		if (check == 0){
			a[k] = x; b[k]++;
			k++;
		}
	}
	for (int i = 0; i < k; i++){
		printf("%d %d\n", a[i], b[i]);
	}
    return 0;
}