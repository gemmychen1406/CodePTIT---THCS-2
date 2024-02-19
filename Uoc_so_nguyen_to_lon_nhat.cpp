#include <stdio.h>
#include <math.h>
// TLE
/*int main () {
	int t;
	scanf("%d", &t);
	while(t--){
		long long n, max = 0;
		scanf("%lld",&n);
		int i = 2;
		while(n > 1){
			if (n == i) break;
			if(n % i == 0){
				if (i > max) max = i;
				n = n/i;
			}
			else i++;
		}
		if (n > max) max = n;
		printf("%lld\n", max);
	}
	
    return 0;
}*/
//AC

int main()
{
    int t;
    scanf("%d", &t);
    while (t--)
    {
        long long n, ans;
        scanf("%lld", &n);
        for (long long i = 2; i * i <= n; i++)
        {
            if (n % i == 0)
            {
                ans = i;
                while (n % i == 0)
                    n /= i;
            }
        }
        if (n > 1)
            ans = n;
        printf("%lld\n", ans);
    }
}