#include <stdio.h>
#include <math.h>
#include <string.h>

int main () {
	int n;
	scanf("%d", &n);
	char a[n+1][n+1];
	for (int i = 0; i < n; i++){
		scanf("\n");
		for (int j = 0; j < n; j++) {
			scanf ("%c", &a[i][j]);
			a[i][j] -= 48;
		}	
	}
	int ans = 0;
	for (int i = n - 1; i >= 0; i--){
		for (int j = n - 1; j >= 0; j--){
			if (a[i][j] == 1) {
				ans++;
				for (int k = 0; k <= i; k++){
					for (int h = 0; h <= j; h++) {
						a[k][h] ^= 1;
					}	
				}
			}
		}
	}
	printf("%d", ans);
    return 0;
}
