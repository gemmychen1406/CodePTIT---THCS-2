#include <stdio.h>
#include <math.h>
#include <string.h>

int skg(int n){
	int h = 10, a1, a2, c = 0;
	while(n / h && c == 0){
		a1 = n - n / h * 10;
		a1 = n - n / h * 10;
		n /= 10;
		a2 = n - n / h * 10; 
		if (a1 < a2) c = 1;
	}
	if (c == 1) return 1;
	return 0;
}

int main () {
	int t;
	scanf("%d", &t);
	while(t--){
		int n;
		scanf("%d", &n);
		int x = 1;
		for (int i = 1; i < n; i++) x *= 10;
		for (int i = x; i < x*10; i++) {
			if (skg(i) == 0) printf("%d ", i);
		}
		printf("\n");
	}
    return 0;
}
