#include <stdio.h>
#include <math.h>
#include <string.h>

int doi(int n){
	int s[10] = {1,2,5,10,20,50,100,200,500,1000};
	for (int i = 0; i < 10; i++){
		if (n == s[i]) return 1;
		if (n > s[i] && n < s[i + 1]) return 1 + doi(n - s[i]);
		if (n > 1000) return n/ 1000 + doi(n%1000);
	}
}

int main () {
	int t;
	scanf("%d", &t);
	while(t--){
		int n;
		scanf("%d", &n);
		printf("%d\n", doi(n));
	}

    return 0;
}
