#include <stdio.h>
#include <math.h>

int main () {
	int n;
	scanf("%d", &n);
	int h = 10;
	int t = n;
	while (t / h) {
		t = t / 10;
	}
	printf("%d", t);
	printf(" ");
    printf ("%d",n - n/h *10);
    return 0;
}
