#include<stdio.h>
#include <math.h>

int tong(int n){
	int s = 0;
	while(n != 0){
		int tmp = n%10;
		s += tmp;
		 n/= 10;
	}
	return s;
}

int thuannghich(int x){
	int a[10];
	int n = 1;
	while(x != 0){
		a[n] = x % 10;
		x /= 10;
		n++;
	}
	for (int i = 1; i <= n/2; i++){
		if (a[i] != a[n - i]) return 0;
	}
	return 1;
}

int main(){
	int t;
	scanf("%d", &t);
	while (t--){
		int a, bd = 1, cnt = 0;
		scanf("%d",&a);
		for (int i = 1; i < a; i++){
			bd *= 10;
		}
		for(int i=bd;i< bd*10;i++){
			if(thuannghich(i) && (tong(i) % 10 == 0))
	   			cnt++;	
		}
		printf("%d\n", cnt);
	}
	return 0;
} 

