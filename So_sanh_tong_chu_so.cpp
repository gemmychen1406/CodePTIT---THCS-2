#include <stdio.h>
#include <math.h>

int tongchuso(int x){
	int sum = 0;
	while(x/10){
		sum+= x % 10;
		x /= 10;
	}
	sum += x;
	return sum;
}
int main () {
	int a, b;
	scanf("%d%d", &a, &b);
	int x = tongchuso(a);
	int y = tongchuso(b);
	if (x <= y) printf("%d %d", a, b);
	else  printf("%d %d", b, a);
    return 0;
}
