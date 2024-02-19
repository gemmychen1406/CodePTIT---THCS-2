#include <stdio.h>

long tgPC(int n, int k)
{
    if (k==0 || k==n) return 1;
    return tgPC(n-1,k-1)+tgPC(n-1,k);
}

int main()
{
    int n,k,j;
    scanf("%d",&n);
    for (k=0; k < n; k++)
    {
        for (j=0; j <= k; j++)
            printf("%d ",tgPC(k,j));
        printf("\n");
    }
}