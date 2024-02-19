#include <stdio.h>
#include <math.h>

int main () {
	int t;
	scanf("%d", &t);
	int i = 10, x = 0;
	while(t * 10 / i){
		x++;
		t = t / 10;
	}
	printf("%d", x);
    return 0;
}
