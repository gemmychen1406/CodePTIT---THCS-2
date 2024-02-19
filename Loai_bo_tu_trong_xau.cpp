#include<stdio.h>
#include<string.h>

int main()
{
    char a[101],b[101];
    gets(a);
    gets(b);
    int m = strlen(a), n = strlen(b),i,j;
    for (i=0;i<m;i++){
        if (a[i]==b[0]&&a[i+n-1]==b[n-1])
        {
            for (j=i;j<n+i+1;j++)
                a[j]='*';
            i+=n;
        }
    }
    for (i=0;i<m;i++)
        if (a[i]!='*') printf("%c",a[i]);
}