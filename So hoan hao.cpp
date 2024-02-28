#include <stdio.h>
#include <math.h>


int shh(int s){
	if (s == 1) return 0;
	int sum = 0;
	for (int i = 1; i*i <= s; i++){
		if (s % i == 0){
			if ( i == s / i) sum = sum + i;
			else sum = sum + i + s / i;
		}
	}
	if (sum - s == s) return 1;
	return 0;
}
int main () {
	int n;
	scanf("%d", &n);
	if (shh(n) == 1){
		printf("1");
	}
	else printf("0");
    return 0;
}
