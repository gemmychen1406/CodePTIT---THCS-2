#include <stdio.h>
#include <math.h>
#include <string.h>

int main () {
	int t;
	scanf("%d", &t);
	char s[200];
	while(t--){
		getchar();
		int cnt = 0, x = 0;
		gets(s);
		int n = strlen(s);
		for (int i = 0; i < n; i++){
			if (s[i] != ' ') x = 1;
			if(x != 0 && s[i] == ' ') {
				cnt++;
				x = 0;
			}
		}
		if (s[n - 1] !=' ') cnt++;
		printf("%d\n", cnt);
	}
    return 0;
}