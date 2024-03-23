#include <stdio.h>
#include <math.h>

int main () {
	int t;
	scanf("%d", &t);
	while(t--){
		int n, x = 0, cnt = 0;
		scanf("%d", &n);
		int a[n], b[n];
		a[n] = 0, b[0] = 0;
		for (int i = 0; i < n; i++){
			scanf("%d", &a[i]);
		}
		for (int i = n - 1; i >= 0; i--){
			if (a[i] > a[i + 1] && a[i] > b[cnt]){
				cnt++;
				b[cnt] = a[i];
			}
		}
		for (int i = cnt; i > 0; i--){
			printf("%d ", b[i]);
		}
		printf("\n");
	}
    return 0;
}
