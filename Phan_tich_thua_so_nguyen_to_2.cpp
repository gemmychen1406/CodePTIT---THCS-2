#include <stdio.h>
#include <math.h>

int main () {
	int n;
	scanf("%d",&n);
	int i = 2;
	while(n > 1){
		if (n == i) break;
		if(n % i == 0){
			printf("%dx", i);
			n = n/i;
		}
		else i++;
	}
	printf("%d", n);
    return 0;
}
