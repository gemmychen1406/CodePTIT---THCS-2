#include <stdio.h>
#include <math.h>
#include <string.h>

int thuannghichchan(char a[]){
	int n = strlen(a);
	for (int i = 0; i <= n/2; i++){
		if (a[i] != a[n - i - 1]) return 0;
		if (a[i] % 2 == 1) return 0;
	}
	if (n % 2 == 1 && a[n/2] % 2 == 1) return 0;
	return 1;
}
int main () {
	int t;
	scanf("%d ", &t);
	while(t--){
		getchar();
		char s[500];
		scanf("%s",s);
		if(thuannghichchan(s)) printf("YES\n");
		else printf("NO\n");
	}
    return 0;
}
