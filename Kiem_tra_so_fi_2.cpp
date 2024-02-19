#include <stdio.h>
#include <math.h>
// TLE
/*long long fi(int x){
	if (x == 0) return 0;
	if (x == 1) return 1;
	return fi(x - 1) + fi(x - 2);
}
int main () {
	int t;
	scanf("%d", &t);
	while(t--){
		long long n;
		scanf("%lld", &n);
		int d = 0;
		for(int i = 1;fi(i)<= n;i++){
			if(fi(i) == n)
				d++;
		}
		if(d==1) printf("YES\n");
		else printf("NO\n");
	}
    return 0;
}*/

// AC
int main()
{
    int t;
    scanf("%d", &t);
    while (t--)
    {
        long long n, a = 0, b = 1, c;
        scanf("%lld", &n);
        while (a < n)
        {
            c = a + b;
            b = a;
            a = c;
        }
        if (n == a)
            printf("YES\n");
        else
            printf("NO\n");
    }
}
