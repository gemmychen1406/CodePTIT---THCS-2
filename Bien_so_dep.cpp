#include <stdio.h>
#include <math.h>
#include <string.h>
int day68(char s[]){
	for (int i = 6; i < 12; i++){
		if (i == 9) continue;
		if (s[i] != '6' && s[i] != '8') return 0;
	}
	return 1;
}
int daytang(char s[]){
	char x = s[6];
	if (s[6] + 1 != s[7] || s[7] + 1 != s[8] || s[8] + 1 != s[10] || s[10] + 1 != s[11]) return 0;	
	//for (int i = 7; i < 12; i++){
	//	if (i == 9) continue;
	//  x++;	
	//	if (s[i] != x) return 0;
	//}
	return 1;
}
int daybang(char s[]){
	if (s[6] == s[7] && s[7] == s[8] && s[10] == s[11]) return 1;
	return 0; 
}
int main () {
	int t;
	scanf("%d ", &t);
	while(t--){
		getchar();
		char s[15];
		gets(s);
		if (daytang(s) || day68(s) || daybang(s)) printf("YES\n");
		else  printf("NO\n");
	}
    return 0;
}
