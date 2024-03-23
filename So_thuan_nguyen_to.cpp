#include <stdio.h>
#include <math.h>
//TLE
int check_snt(long long x) {
	if (x < 2) return 0;
	for (int i = 2; i * i <= x; i++){
		if (x % i == 0) return 0;
	}
	return 1;
}
int tongnt(long long n){
	int s = 0;
	while(n != 0){
		int tmp = n%10;
		if (tmp !=2 && tmp != 3 && tmp != 5 && tmp != 7) return 0;
		s += tmp;
		n/= 10;
	}
	if (check_snt(s) == 1) return 1;
	return 0;
}
int main () {
	int t;
	scanf("%d", &t);
	while(t--){
		long long a, b, cnt = 0;
		scanf("%lld%lld", &a, &b);
		if (a > b){
			long long k = a;
			a = b;
			b = k;
		}
		for (long long i = a; i <= b; i++){
			if (check_snt(i)== 1 && tongnt(i) == 1) cnt++;
		}
		printf("%lld\n", cnt);
	}
    return 0;
}
//AC
#include<stdio.h>
#include<math.h>
int check_snt(int n){
    int i;
    if (n<2) return 0;
    for (i=2;i<=sqrt(n);i++)
        if (n%i==0) return 0;
    return 1;
}

int tongnt(int x)
{
    int tong = 0;
    while(x > 0){
        int t = x % 10;
        if(t != 2 && t != 3 && t != 5 && t != 7) return 0;
        tong = tong + t;
        x = x / 10;
    }
    if(check_snt(tong)) return 1;
    return 0;
}


int main()
{
    int t;
    scanf("%d",&t);
    while(t--){
        int a,b,d=0,i;
        scanf("%d%d",&a,&b);
        if (a<=b){
            for (i=a;i<=b;i++)
                if (tongnt(i))
                    if (check_snt(i)) d++;
            printf("%d\n",d);
        }
        else{
            for (i=b;i<=a;i++)
                if (tongnt(i))
                    if (check_snt(i)) d++;
            printf("%d\n",d);
        }
    }
}