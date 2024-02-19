#include <stdio.h>
#include <math.h>

int main () {
	int n, m, p;
	scanf("%d%d", &n, &m);
	int a[n], b[m];
	for (int i = 0; i < n; i++) scanf("%d", &a[i]);
	for (int i = 0; i < m; i++) scanf("%d", &b[i]);
	scanf("%d", &p);
	for (int i = 0; i < p; i++) printf("%d ", a[i]);
	for (int i = 0; i < m; i++) printf("%d ", b[i]);
	for (int i = p; i < n; i++) printf("%d ", a[i]);
	/*for (int i = 0; i < n; i++) {
		if (i == p) {
			for (int j = 0; j < m; j++) printf("%d ", b[j]);
		}
		printf("%d ", a[i]);
	}*/
   	return 0;
}
