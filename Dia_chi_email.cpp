#include <stdio.h>
#include <math.h>
#include <string.h>

int main () {
	char a[55],  b[55], c[55];
	gets(a);
	int n = strlen(a), h = 0, k = 0;
	if (a[0] != ' ') b[h++] = a[0];
	for (int i = 0; i < n; i++){
		if (a[i] != ' ' && a[i - 1] == ' ') b[h++] = a[i];
	}
	int q = 0;
	for (int i = n - 1; i > 0; i--){
		if (a[i] != ' ') {
			c[k++] = a[i];
			q = 1;
		}
		else if (a[i] == ' ' && q == 1) break;
	}
	int x = strlen(c), y = strlen(b);
	//puts(b);
	for (int i = 0; i < y - 1; i++){
		if (b[i] >= 'A' && b[i] <= 'Z') b[i] += 32;
		printf("%c", b[i]);
	}
	for (int i = x - 1; i >= 0; i--){
		if (c[i] >= 'A' && c[i] <= 'Z') c[i] += 32;
		printf("%c", c[i]);
	}	
	printf("@ptit.edu.vn");
    return 0;
}
