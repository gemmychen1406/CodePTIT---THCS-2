#include <stdio.h>
#include <math.h>

int tnkhac9(int x){
	int a[10];
	int n = 1;
	while(x != 0){
		a[n] = x % 10;
		x /= 10;
		n++;
	}
	for (int i = 1; i <= n/2; i++){
		if (a[i] != a[n - i]) return 0;
		if (a[i] == 9) return 0;
	}
	return 1;
}

int main () {
	int t;
	int cnt = 0;
	scanf("%d", &t);
	for (int i = 2; i < t; i++){
		if (tnkhac9(i)) {
			printf("%d ", i);
			cnt++;
		}
	}
	printf("\n%d", cnt);
    return 0;
}
