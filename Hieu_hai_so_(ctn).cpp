#include <stdio.h>
#include <math.h>
#include <string.h>
void dao(char x[], int k){
	char y[1001];
	int h = 0;
	for (int i = k; i > 0; i--){
		y[h] = x[i];
		h++; 
	}
	strcpy(x, y);
}

void tru(char a[], char b[]){
	char c[1001];
	int n1 = strlen(a), n2 = strlen(b);
	dao(a, n1); dao(b, n2);
	for (int i = 0; i < n2; i++){
		if (a[i] < b[i]){
			c[i] = a[i] + 10 - b[i] + 48 - x;
			x = 1;
		}
		else if (a[i] > b[i]){
			c[i] = a[i] - b[i] + 48 - x;
			x = 0;
		}
		else {
			...
		}
	}
}
int main () {
	int t;
	scanf("%d", &t);
	while(t--){
		scanf("\n");
		char a1[1001], b1[1001];
		gets(a1); gets(b1);
		int n1 = strlen(a1), n2 = strlen(b1);
		if (n1 > n2) {
			tru(a1, b1);
		}
		else if (n1 < n2){
			tru(b1, a1);
		}
		else {
			if (strcmp(a1, b1) > 0) tru(a1, b1);
			else if (strcmp(a1, b1) < 0) tru(b1, a1);
			else printf("0");
		}
		printf("\n");
	}
    return 0;
}

