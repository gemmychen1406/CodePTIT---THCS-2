#include <stdio.h>
#include <math.h>
#include <string.h>

int thuannghich8(char a[]){
	int n = strlen(a);
	if (a[0] != '8' || a[n - 1] != '8') return 0;
	for (int i = 0; i <= n/2; i++){
		if (a[i] != a[n - i - 1]) return 0;
	}
	return 1;
}
int tong(char s[]){
	int n = strlen(s);
	int sum = 0;
	for (int i = 0; i < n; i++){
		sum += s[i] - 48;
	}
	if (sum % 10 == 0) return 1;
	return 0;
}
int main () {
	int t;
	scanf("%d ", &t);
	while(t--){
		getchar();
		char s[500];
		scanf("%s",s);
		if(thuannghich8(s) && tong(s)) printf("YES\n");
		else printf("NO\n");
	}
    return 0;
}
