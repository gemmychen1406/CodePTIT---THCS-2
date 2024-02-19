#include <stdio.h>
#include <math.h>
#include <string.h>

int main () {
	int x;
	scanf("%d", &x);
	while(x--){
		int t, l = 0, c = 0;
		scanf("%d", &t);
		int h = 10;
		while(t * 10 / h){
			if ((t - t / h * 10) % 2 == 1) l++;
			else c++;
			t = t / 10;
		}
		printf("%d %d", l, c);
		printf("\n");
	}
    return 0;
}
