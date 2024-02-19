#include <stdio.h>
#include <math.h>
#include <string.h>

int main () {
	int n;
	scanf("%d", &n);
	int a[n], b[n];
	for (int i = 0; i < n; i++) scanf("%d%d", &a[i], &b[i]);
	for (int i = 0; i < n-1; i++){
        int m = i;
		for(int j = i+1; j < n; j++)
            if(a[m] > a[j]){
                m = j;
            }
        int t=a[i];
        a[i]=a[m];
        a[m]=t;
        int h = b[i];
        b[i] = b[m];
        b[m] = h;
	}
	int sumT = a[0];
	for (int i = 0; i < n - 1; i++){
		if (sumT + b[i] <= a[i + 1]) sumT = a[i + 1];
		else sumT += b[i];
	}
	printf("%d", sumT + b[n - 1]);
    return 0;
}
