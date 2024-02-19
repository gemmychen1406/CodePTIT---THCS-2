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
		int n, cnt = 0;
		scanf("%d", &n);
		//printf("%d ", tongcs(n));
		for (int i = 5; i < n; i++){
			if (tongcs(i) % 5 == 0 && check_snt(i)) {
				printf("%d ", i);
				cnt++;
			}
		}
		printf("\n%d", cnt);
    return 0;
}
