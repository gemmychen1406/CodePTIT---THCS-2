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
	int cnt = 0;
	for (int i = 0; i < k; i++){
		if (b[i] == 1) cnt++;
	}
	printf("%d\n", cnt);
	for (int i = 0; i < k; i++){
		if (b[i] == 1) printf("%d ", a[i]);
	}
    return 0;
}