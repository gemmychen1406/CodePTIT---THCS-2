#include <stdio.h>
#include <math.h>
#include <string.h>

int tongcs(int x){
	int sum = 0;
	while(x/10){
		sum += x % 10;
		x /= 10;
	}
	sum += x;
	return sum;
}

int main () {
	int t;
	scanf("%d", &t);
	while(t--){
		int n;
		scanf("%d", &n);
		//printf("%d ", tongcs(n));
		if (tongcs(n) % 10 == 0) printf("YES");
		else printf("NO");
		printf("\n");
	}
    return 0;
}
