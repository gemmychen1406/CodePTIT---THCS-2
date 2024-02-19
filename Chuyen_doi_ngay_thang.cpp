#include <stdio.h>
#include <math.h>

int main () {
	int t;
	scanf("%d", &t);
	printf("%d %d %d", t / 365, (t % 365) / 7, (t % 365) % 7);
	return 0;
}
