#include <stdio.h>
#include <math.h>

int main () {
	int t, h = 1;
	scanf("%d", &t);
	while(t--){
		int n, m, p;
		scanf("%d%d%d", &n, &m, &p);
		int a[n],  b[m];
		for (int i = 0; i < n; i++) scanf("%d", &a[i]);
		for (int i = 0; i < m; i++) scanf("%d", &b[i]);
		printf("Test %d:\n", h++);
		for (int i = 0; i < n; i++) {
			if (i == p) {
				for (int j = 0; j < m; j++) printf("%d ", b[j]);
			}
			printf("%d ", a[i]);
		}
		printf("\n");
	}
    return 0;
}
