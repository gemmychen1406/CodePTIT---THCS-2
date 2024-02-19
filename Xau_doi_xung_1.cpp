#include <stdio.h>
#include <math.h>
#include <string.h>
int dx(char s[]){
	int n = strlen(s);
	int cnt = 0;
	if (n % 2== 1) for (int i = 0; i <= (n - 1)/2; i++){
		if (s[i] != s[n - i - 1]) cnt++; 
		if (cnt >= 2) return 0;
	}
	else {
		for (int i = 0; i <= (n - 1)/2; i++){
			if (s[i] != s[n - i - 1]) cnt ++;
		}
		if (cnt != 1) return 0;
	}
	return 1;
}
int main () {
	int t;
	scanf("%d", &t);
	while(t--){
		scanf("\n");
		char s[22];
		gets(s);
		if (dx(s)) printf("YES\n");
		else printf("NO\n");
	}
    return 0;
}
