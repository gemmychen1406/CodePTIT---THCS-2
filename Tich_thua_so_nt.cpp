#include <stdio.h>
#include <math.h>
int main(){
	int t;
	scanf("%d",&t);
	while(t--){
		int n, h = 1, x = 0;
		scanf("%d",&n);
		int i = 2;
		while(n > 1){
			if(n % i ==0){
				if (i != x) h *= i;
				x = i;
				n = n/i;
			}
			else i++;
		}
		printf("%d\n", h);
	}
}

