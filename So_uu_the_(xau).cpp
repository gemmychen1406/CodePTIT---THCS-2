#include <stdio.h>
#include <math.h>
#include <string.h>
int check(char s[], int x){
	if (s[0] == '0') return 0;
	for (int i = 0; i < x; i++){
		if(s[i] < '0' || s[i] > '9') return 0;
	}
	return 1;
}

int uuthechan(char s[], int x){
	int c = 0, l = 0;
	for (int i = 0; i < x; i++){
		if (s[i] % 2 == 1)l++;
		else c++;
	}
	if (c > l) return 1;
	return 0;
}
int uuthele(char s[], int x){
	int c = 0, l = 0;
	for (int i = 0; i < x; i++){
		if (s[i] % 2 == 1)l++;
		else c++;
	}
	if (l > c) return 1;
	return 0;
}

int main () {
	int t;
	scanf("%d", &t);
	while(t--){
		scanf("\n");
		char s[1001];
		gets(s);
		int n = strlen(s);
		if (check(s,n)){
			if (n % 2 == 0 && uuthechan(s,n)) printf("YES\n");
			else if (n % 2 == 1 && uuthele(s,n)) printf("YES\n");
			else printf("NO\n");
		}
		else printf("INVALID\n");
		
	}
    return 0;
}
