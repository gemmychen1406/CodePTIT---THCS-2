#include <stdio.h>
#include <math.h>
#include <string.h>
int a[10] = {};

int main () {
	int t;
	scanf("%d", &t);
	int h = 10;
	while(t * 10 / h){
		int x = t - t / h * 10;
		a[x]++;
		t = t/ 10;
	}
	if (a[2]) printf("2 %d\n", a[2]);
	if (a[3]) printf("3 %d\n", a[3]);
	if (a[5]) printf("5 %d\n", a[5]);
	if (a[7]) printf("7 %d\n", a[7]);
    return 0;
}
