#include <stdio.h>
#include <math.h>

int check(int n){
	int x = 0;
	int h = 10, a1, a2;
	while(n / h && x == 0){
		a1 = n - n / h * 10;
		a1 = n - n / h * 10;
		n /= 10;
		a2 = n - n / h * 10; 
		if (a1 >= a2) {
			x = 1;
			break;
		}
	}
	return x;
}
int main () {
	int t;
	scanf("%d", &t);
	while(t--){
		int a, b;
		scanf("%d%d", &a, &b);
		int cnt = 0;
		for (int i = a; i <= b; i++){
			if (check(i) == 0) cnt++;
		}
		printf("%d\n", cnt);
	}
    return 0;
}
