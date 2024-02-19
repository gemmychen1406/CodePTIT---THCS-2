#include <stdio.h>
#include <math.h>
int check_snt(int x) {
	if (x <= 5){
		if (x == 2 || x == 3 || x == 5) return 1;
		else return 0;
	}
	else {
		for (int i = 2; i <= sqrt(x); i++){
			if (x % i == 0) return 0;
		}
	}
	return 1;
}
int thuannghich(int x){
	int a[10];
	int k = 1;
	while(x/10){
		a[k] = x % 10;
		x /= 10;
		k++;
	}
	a[k] = x;
	for (int i = 1; i <= k/2; i++){
		if (a[i] != a[k - i + 1]) return 0;
	}
	return 1;
}
int main () {
	int t;
	scanf("%d", &t);
	while(t--){
		int a, b;
		scanf("%d%d", &a, &b);
		int cnt = 0;
		for (int i = a; i <= b; i++){
			if (check_snt(i) == 1 && thuannghich(i) == 1) {
				printf("%d ", i);
				cnt++;
			}
			if (cnt == 10){
				printf("\n");
				cnt = 0;
			}
		}
		printf("\n");
	}
    return 0;
}
