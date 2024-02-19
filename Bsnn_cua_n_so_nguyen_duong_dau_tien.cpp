#include<stdio.h>
long long ucln (long long a,long long b){
	if (a==0||b==0) return a+b;
	return ucln(b%a,a);
}
long long bcnn(long long a, long long b){
    return (a*b)/ucln(a,b);
}

long long bcnn_so(long long m){
        if (m==1) return 1;
        long long temp = 2;
        for(long long i = 3 ;i<=m;i++){
            temp = bcnn(temp, i);
        }
        return temp;
}

int main(){
    int t;
    scanf("%d",&t);
    while(t--){
        long long m;
        scanf("%lld",&m);
        printf("%lld\n",bcnn_so(m));
    }
}