#include <stdio.h>
#include <math.h>
#include <string.h>

int buoc(int n){
	int x = n/2;
	int i = 1;
	while(i < x){
		x  -= i;
		i++;
	}
	int h = x + n%2;
	if (h== 0) return i*2;
	int j = i;
	if (j >= h) return i*2 + 1;
	int t = 0;
	while (h){
		while (h >= j) {
			h -= j;
			t++;
		}
		j--;
	}
	return i*2 + t;
}
int main () {
	int l, r;
	while(scanf("%d%d", &l, &r) != -1){
		int n = abs(r - l);
		int h = buoc(n);
		printf("%d\n", h);
	}
    return 0;
}
