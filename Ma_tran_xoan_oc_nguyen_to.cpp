#include<stdio.h>
#include<math.h>
int a[100][100],n,i,j,d,hang,cot;
int snt(int n){
    if (n<2)
        return 0;
    int i;
    for (i=2;i<=sqrt(n);i++)
        if (n%i==0) return 0;
    return 1;
}

int ngtothun(int n){
    int d=0;
    int i=2;
    while(d < n) {
        if (snt(i)==1){
            d++;
        }
        if (d==n){
            return i;
        }
        i++;
    }
}
void matran() {
    int m=1;
    while(m<=n*n) {
        int hang;
        hang=n-1;
        int cot=n-1;
        int d=0;
        while(d<=n/2) {
            for(i=d;i<=cot;i++) {
                a[d][i]=ngtothun(m++);
            }
            for(i=d+1;i<=hang;i++) a[i][cot]=ngtothun(m++);
            for(i=cot-1;i>=d;i--) a[hang][i]=ngtothun(m++);
            for(i=hang-1;i>d;i--) a[i][d]=ngtothun(m++);
            hang--;
            cot--;
            d++;
        }
        m++;
    }
}
void inkq(){
    for (i=0;i<n;i++){
        for (j=0;j<n;j++)
            printf("%d ",a[i][j]);
        printf("\n");
    }
}
int main(){
    int t,u;
    scanf("%d",&t);
    for (u=1;u<=t;u++){
        scanf("%d",&n);
        printf("Test %d:\n",u);
        matran();
        inkq();
    }
}