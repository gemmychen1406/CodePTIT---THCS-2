#include <stdio.h>
#include <math.h>
#include <string.h>

int main () {
	int t, k = 0;
	scanf("%d", &t);
	while(t--){
		int n,a[100],b[100],i,j,d=0;
	    scanf("%d",&n);
	    for (i=0;i<n;i++)
	        scanf("%d",&a[i]);
	    for (i=0;i<n;i++)
	        b[i]=1;
	    k++;
		printf("Test %d:\n", k);
	    for (i=0;i<n;i++)
	    {
	        int count = 1;
	        if (b[i])
	        {
	            b[i]=0;
	            for (j=i+1;j<n;j++)
	            {
	                if (a[i]==a[j])
	                {
	                    count ++;
	                    b[j]=0;
	                }
	            }
	            printf("%d xuat hien %d lan\n",a[i],count);
	        }
	    }
	}
    return 0;
}
