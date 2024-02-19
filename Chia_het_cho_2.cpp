#include <stdio.h>
#include <math.h>

int main () {
	int t;
	scanf("%d", &t);
	while(t--){
		int n, s = 0;
		scanf("%d", &n);
		if (n % 2 == 0) s++;
		for(int i = 2; i*i < n; i++){
			if(n % i == 0){
				if (i % 2 == 0) s++;	
				if ((n/i) % 2 == 0) s++;
			}
		} 
		int x = sqrt(n);
		if ( x % 2 == 0 && x * x == n) s++;
		printf("%d\n", s);
	}
    return 0;
}
