#include <stdio.h>
#include <math.h>
#include <string.h>

int main () {
	int t, x = 1;
	scanf("%d", &t);
	while(t--){
		int n;
		scanf("%d", &n);
		int a[n+1];
		int max = 0;
		int cnt = 1;
		a[n] = 0;		
		for (int i = 0; i < n; i++){
			scanf("%d", &a[i]);
			if (i > 0 && a[i] > a[i - 1]) cnt++;
			else if ( i > 0 && a[i] <= a[i - 1]){
				if (cnt > max) max = cnt;
				cnt = 1;
			}
		}
		int ct = 1;
		printf("Test %d:\n%d\n", x, max);
		for (int i = 1; i <= n; i++){
			if (a[i] > a[i - 1]) ct++;
			else if ( i > 0 && a[i] <= a[i - 1]){
				if (ct == max) {
					for (int k = i - max; k < i; k++){
						printf("%d ", a[k]);
					}
					printf("\n");
				}
				ct = 1;
			}
		}
		x++;
	}
    return 0;
}
