#include <stdio.h>
#include <math.h>

int main () {
	int t;
	scanf("%d", &t);
	while(t--){
		int n, cnt = 0;
		scanf("%d", &n);
		int a[n + 5] = {0};
		for (int i = 1; i <= n; i++) {
			scanf("%d", &a[i]);
			int x = 0;
			for (int j = 0; j <= i - 1; j++){
				if (a[i] < a[j]) x = 1;
			}
			if (x == 0) cnt++;
		}
		printf("%d\n", cnt);
	}
    return 0;
}
