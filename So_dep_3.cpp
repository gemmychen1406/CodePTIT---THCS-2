#include <stdio.h>
#include <math.h>

int tong(long long n){
	int s = 0;
	while(n != 0){
		int tmp = n%10;
		s += tmp;
		n /= 10;
	}
	return s;
}
int thuannghichchua6(long long x){
	int a[10];
	int n = 1;
	while(x != 0){
		a[n] = x % 10;
		x /= 10;
		n++;
	}
	int check = 0;
	for (int i = 1; i <= n/2; i++){
		if (a[i] != a[n - i]) return 0;
	}
	for (int i = 1; i <= n; i++){
		if(a[i] == 6) check = 1;
	}
	if (check == 0) return 0;
	return 1;
}
int main () {
	long long a, b;
	scanf("%lld%lld", &a, &b);
	if (a > b){
		long long k = a;
		a = b;
		b = k;
	}
	for (long long i = a; i <= b; i++){
		if (thuannghichchua6(i) == 1 && tong(i) % 10 == 8) printf("%lld ", i);
	}
    return 0;
}
