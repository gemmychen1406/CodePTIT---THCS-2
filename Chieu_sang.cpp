#include <stdio.h>
#include <math.h>
#include <string.h>

/*
long long a[1000] = {};
int main () {
	long long n, m, k;
	scanf("%lld", &n);
	long long a[n+1] = {};
	scanf("%lld%lld", &m, &k);
	long long b[m+1];
	for (long long i = 1; i <= m; i++) {
		scanf("%lld", &b[i]);
		for (long long j = b[i] - k; j <= b[i] + k; j++){
			if (a[j] == 0) a[j] = 1;
		}
	}
	long long cnt = 0, x = 0, t = 0;
	for (long long i = 1; i <= n; i++){
		if (a[i] == 0) {
			x++;
			t = 1;
		}
		else t = 0;
		if(x == k*2+1){
			cnt++;
			x = 0;
		}
		else if (x != 0 && t == 0) {
			cnt++;
			x = 0;
		}
		else if (x != 0 && t == 1 && i == n) cnt++;
	}
	printf("%lld", cnt);
    return 0;
}*/
long long b[1000] = {};
int main(){
    int n,m,k;
    scanf("%d%d%d",&n,&m,&k);
    int a[m];
    for(int i = 0;i<m;i++){
      scanf("%d",&a[i]);
    }
    for(int i = 0;i<m;i++){
    for(int j = a[i]-k;j<=a[i]+k;j++){
        if(j >= 0 && j<=n) b[j] = 1;
      }
    }
    int cnt = 0;
    for(int i = 1;i<=n;i++){
      if(!b[i]){
        if(i+k<= n && b[i+k]){
          cnt++;
          int z = i+k;
          while(b[z] == 1){
            z--;
          }
          i = z+k;
        }
        else {
          cnt++;
          i = i+2*k;
        }
      }
    }
    printf("%d",cnt);
}
