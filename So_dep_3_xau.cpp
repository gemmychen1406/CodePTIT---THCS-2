#include <stdio.h>
#include <math.h>
#include <string.h>

int thuannghichnt(char a[]){
	int n = strlen(a);
	for (int i = 0; i <= n/2; i++){
		if (a[i] != a[n - i - 1]) return 0;
		if (a[i] != '2' && a[i] != '3' && a[i] != '5' && a[i] != '7') return 0;
	}
	if (n % 2 == 1 && a[n/2] != '2' && a[n/2] != '3' && a[n/2] != '5' && a[n/2] != '7') return 0;
	return 1;
}
int main () {
	int t;
	scanf("%d ", &t);
	while(t--){
		getchar();
		char s[500];
		scanf("%s",s);
		if(thuannghichnt(s)) printf("YES\n");
		else printf("NO\n");
	}
    return 0;
}
