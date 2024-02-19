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
int chuso_nt(int x){
	while(x / 10){
		int k = x % 10;
		if (k != 2 && k != 3 && k != 5 && k != 7) return 0;
		x /= 10;
	}
	if (x != 2 && x != 3 && x != 5 && x != 7) return 0;
	return 1;
}
int main () {
	int t;
	scanf("%d", &t);
	while(t--){
		int a, b, cnt = 0;
		scanf("%d%d", &a, &b);
		for (int i = a; i <= b; i++){
			if (check_snt(i) == 1 && chuso_nt(i) == 1) cnt++;
		}
		printf("%d\n", cnt);
	}
    return 0;
}
