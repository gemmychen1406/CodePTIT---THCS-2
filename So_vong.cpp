#include <stdio.h>
#include <math.h>
#include <string.h>

int main () {
	int t;
	scanf("%d ", &t);
	while(t--){
		char a[100];
		gets(a);
		int n = strlen(a);
		printf("%c", a[n-1] *3);
	}
    return 0;
}
