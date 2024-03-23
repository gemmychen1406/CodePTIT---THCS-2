#include <stdio.h>
#include <string.h>
int main () {
	int t;
	scanf("%d ", &t);
	while(t--){
		// scanf("\n");
		char a[1001], b[1001];
		gets(a); 
		gets(b);
		if(strlen(a) < strlen(b)){
			char c[1001];
			strcpy(c, a);
			strcpy(a, b);
			strcpy(b, c);
		}
		int n1 = strlen(a), n2 = strlen(b);
		int x[10000], y[10000];
		int z[10000];
		int k = n1 - n2;
		for (int i=0;i<n1;i++){
			x[i] = 0;
			y[i] = 0;
			z[i] = 0;
		}
		for (int i = 0; i < n1; i++){
			x[i] = a[i] - '0';
		}
		for (int i = 0; i < n2; i++){
			y[i + k] = b[i] - '0';
		}
		int nho = 0;
		for (int i = n1 - 1; i >= 0; i--){
			if(i > 0){
				z[i] = (x[i] + y[i]) % 10;
				x[i-1] += (x[i] +y[i]) / 10;
			}
			else{
				z[i] = (x[i] + y[i]) % 10;
				nho = (x[i] + y[i]) / 10;
			}
		}

		if (nho) printf("1");
		for (int i = 0; i < n1; i++) printf("%d", z[i]);
		printf("\n");
	}
    return 0;
}