#include <stdio.h>
#include <math.h>

int main () {
	int n;
	scanf("%d", &n);
	int h = 10, x = 1;
	int t = n;
	if (t - t/h * 10 != 0) printf ("%d",t - t/h *10);
	while (t / h) {
		t = t / 10;
		x = x * h;
	}
	printf("%d",(n - t * x) / 10);
	printf("%d", t);
    return 0;
}
