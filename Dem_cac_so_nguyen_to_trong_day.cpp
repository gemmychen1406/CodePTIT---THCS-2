#include<math.h>
#include<stdio.h>

int a[100];
int n;

void nhap(){
    int i;
	scanf("%d", &n);
	for( i = 0; i< n; i++ ){
		scanf("%d", &a[i]);
	}
}

int snt(int a)
{
    if (a<2) return 0;
    int i;
    for (i=2;i<=sqrt(a);i++)
        if (a%i==0)
            return 0;
    return 1;
}
int NotInArray(int t, int b[100], int m) {
    int i;
    for(i = 0; i < m; i++)
        if( t == b[i] )
            return 0;
    return 1;
}

int dem(int x) {
    int dem = 0,i;
    for(i = 0; i < n; i++) {
        if(a[i] == x)
            dem++;
    }
    return dem;
}

void output() {
    int b[100];
    int m = 0,i,j;
    for(i = 0; i < n; i++) {
        if(NotInArray(a[i],b,m) && snt(a[i]))
            b[m++] = a[i];
        }

    for(i = 0; i < m; i++) {
        for(j = i + 1; j < m; j++) {
            if(b[i] > b[j]) {
                int t = b[i];
                b[i] = b[j];
                b[j] = t;
            }
        }
    }
    for(i = 0; i < m; i++)
        printf("%d xuat hien %d lan\n", b[i], dem(b[i]));
}
int main(){
    int t,i;
    scanf("%d",&t);
    for (i=1;i<=t;i++)
    {
        nhap();
        printf("Test %d:\n",i);
        output();
    }
	return 0;
}