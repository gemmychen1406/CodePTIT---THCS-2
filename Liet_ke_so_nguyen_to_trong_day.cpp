#include <stdio.h>
#include <math.h>
#include <string.h>

int snt(int a)
{
    if (a<2) return 0;
    int i;
    for (i=2;i<=sqrt(a);i++)
        if (a%i==0)
            return 0;
    return 1;
}
int main () {
	int n, k=0;
	scanf("%d", &n);
	int a[n],b[n];
	for (int i = 0; i<n; i++){
		scanf("%d", &a[i]);
		if (snt(a[i])){
			b[k++] = a[i];
		}
	}
	printf("%d ", k);
	for (int i = 0; i < k; i++) printf("%d ", b[i]);
    return 0;
}
