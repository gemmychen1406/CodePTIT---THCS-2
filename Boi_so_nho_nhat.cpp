#include<stdio.h>
long long ucln (long long a,long long b){
	if (a==0||b==0) return a+b;
	return ucln(b%a,a);
}
long long bcnn(long long a, long long b){
    return (a*b)/ucln(a,b);
}

long long bcnn_so(long long n, long long m){
        if (m==n) return n;
        long long temp = bcnn(n,n+1);
        for(long long i=n+2;i<=m;i++){
            temp = bcnn(temp, i);
        }
        return temp;
}

int main(){
    int t;
    scanf("%d",&t);
    while(t--){
        long long m,n;
        scanf("%lld%lld",&n,&m);
        printf("%lld\n",bcnn_so(n,m));
    }
}