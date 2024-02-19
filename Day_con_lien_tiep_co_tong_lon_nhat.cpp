#include <stdio.h>
#include <math.h>
#include <string.h>
//code TLE
int main () {
	int t;
	scanf("%d", &t);
	while(t--){
		int n;
		scanf("%d", &n);
		int a[n];
		for (int i = 0; i < n; i++) scanf("%d", &a[i]);
		int sum = a[0];
		for (int i = 1; i < n; i++){
			int x = a[i - 1];
			for (int j = i; j < n; j++){
				x = x + a[j];
				if (x > sum) sum = x;
			}
		}
		printf("%d\n", sum);
	}
    return 0;
}
// Code AC:
/*
#include <stdio.h>
#include <math.h>

int main()
{
    int t;
    scanf("%d",&t);
    while(t--){
        long long n,Max,s=0,ktd = 0;
        scanf("%lld",&n);
        int a[n];
        for (long long i=0;i<n;i++){
            scanf("%lld",&a[i]);
            if (a[i]>0) ktd=1;
            if (i==0) Max = a[0];
            else
                if (Max<a[i]) Max = a[i];
        }
        if (ktd==0) printf("%lld\n",Max);
        else {
            for (long long i=0;i<n;i++){
            if (s+a[i]<0){
                s = 0;
                continue;
            }
            s+=a[i];
            if (Max<s) Max = s;
        }
        printf("%lld\n",Max);
        }
    }
}*/