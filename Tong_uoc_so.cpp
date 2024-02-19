#include <stdio.h>
#include <math.h>
int a[2000005];
void sang()
{
    for (int i = 2; i * i <= 2000000; i++)
        if (!a[i])
            for (int j = i * i; j <= 2000000; j += i)
                if (!a[j])
                    a[j] = i;
    for (int i = 2; i <= 2000000; i++)
        if (!a[i])
            a[i] = i;
}

int main(){
	sang();
	int t;
	long long h = 0;
	scanf("%d",&t);
	while(t--){
		int n;
		scanf("%d",&n);
		while(n > 1){
			h += a[n];
			n /= a[n];
		}
	}
	printf("%lld", h);
}

