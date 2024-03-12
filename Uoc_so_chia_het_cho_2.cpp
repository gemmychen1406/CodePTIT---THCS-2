#include <stdio.h>
#include <math.h>

int main(){
	int t; scanf("%d",&t);
	while(t--){
		long long n; scanf("%lld",&n);
		long long cnt = 0;
		for(int i = 1;i<=sqrt(n);i++){
			if(n % i == 0){
				if(i%2 == 0) cnt++;
				if((n/i) != i && (n/i) % 2 == 0) cnt++;
			}
		}
		printf("%lld\n",cnt);
	}
	return 0;
}
