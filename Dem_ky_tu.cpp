#include <stdio.h>
#include <math.h>
#include <string.h>

int main () {
	char a[100000];
	gets(a);
	int n = strlen(a);
	int c = 0, s = 0, k = 0;
	for (int i = 0; i < n; i++){
		if(a[i] >= '0' && a[i] <= '9') s++;
		else if(a[i] >= 'A' && a[i] <= 'Z') c++;
		else if(a[i] >= 'a' && a[i] <= 'z') c++;
		else k++;
	}
	printf("%d %d %d", c, s, k);
    return 0;
}
