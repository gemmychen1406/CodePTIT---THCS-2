#include <stdio.h>
#include <math.h>
#include <string.h>

int main () {
	int t;
	scanf("%d", &t);
	while(t--){
		scanf("\n");
		char s[1000];
		scanf("%s", s);
		int n = 0;
		int x = strlen(s);
		for (int i = 0; i < x; i++){
			if (s[i]=='M') n += 1000;
			else if (s[i] == 'D') n+= 500;
			else if (s[i] == 'C') {
				if (s[i + 1] == 'D' || s[i + 1] == 'M') n -= 100;
				else n += 100;
			}
			else  if (s[i] == 'L') n+= 50;
			else if (s[i] == 'X') {
				if (s[i + 1] == 'L' || s[i + 1] == 'C') n -= 10;
				else n += 10;
			}
			else if (s[i] == 'V') n+= 5;
			else if (s[i] == 'I') {
				if (s[i + 1] == 'V' || s[i + 1] == 'X') n -= 1;
				else n += 1;
			}
		}
		printf("%d\n", n);
	}
    return 0;
}
