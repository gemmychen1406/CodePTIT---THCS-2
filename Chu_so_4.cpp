#include <stdio.h>
#include <math.h>

int tnkhac4(int x){
	int a[10];
	int n = 1;
	while(x != 0){
		a[n] = x % 10;
		x /= 10;
		n++;
	}
	for (int i = 1; i <= n/2; i++){
		if (a[i] != a[n - i]) return 0;
		if (a[i] == 4) return 0;
	}
	return 1;
}

int tongcs(int n){
	int sum = 0;
	while(n != 0){
		sum += n%10;
		n /= 10;
	}
	return sum;
}
int main () {
	int t;
	scanf("%d", &t);
	while(t--){
		int n;
		scanf("%d", &n);
		int bd = 1;
		for (int i = 1; i < n; i++){
			bd *= 10;
		}
		for (int i = bd; i < bd*10; i++){
			if (tongcs(i) % 10 == 0 && tnkhac4(i) == 1) printf("%d ", i);
		}
		printf("\n");
	}
    return 0;
}
