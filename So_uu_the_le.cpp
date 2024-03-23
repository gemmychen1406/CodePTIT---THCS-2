#include <stdio.h>
#include <math.h>
#include <string.h>

int main () {
	int t;
	scanf("%d", &t);
	while(t--){
		char s[20];
		scanf("%s", s);
		int n = strlen(s);
		if (s[n - 1] % 2 != 0){
			int cnt = 0;
			for (int i = 0; i < n; i++){
				if(s[i] % 2 != 0) cnt++;
			}
			if (cnt > n/2) printf("YES");
			else printf("NO");
		}
		else printf("NO");
		printf("\n");
	}
    return 0;
}
