#include <stdio.h>
#include <math.h>
#include <string.h>

int main () {
	int n, m;
	scanf("%d%d", &n, &m);
	int a[n], b[m];
	int A[1000] = {0}, B[1000] = {0};
	for (int i = 0; i < n; i++) scanf("%d", &a[i]);
	for (int i = 0; i < m; i++) scanf("%d", &b[i]);
	for (int i=0;i<n;i++) A[a[i]]++;
    for (int i=0;i<m;i++) B[b[i]]++;
    for (int i=0;i<1000;i++) if (A[i]>0 && B[i]>0) printf("%d ",i);
    printf("\n");
    for (int i=0;i<1000;i++) if (A[i]>0 && B[i]==0) printf("%d ",i);
    printf("\n");
    for (int i=0;i<1000;i++) if (A[i]==0 && B[i]>0) printf("%d ",i);
    printf("\n");
    return 0;
}
