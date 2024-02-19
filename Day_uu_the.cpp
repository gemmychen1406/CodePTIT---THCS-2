#include <stdio.h>
#include <math.h>
#include <string.h>
#include <ctype.h>


int main () {
	int t;
	scanf("%d", &t);
	while(t--){
		int n = 0;
		int s[200];
		char k = ' ';
		while(k !='\n'){
			scanf("%d", &s[n]);
			n++;
			k = getchar();
		}
		if (n % 2 != 0){
			int cnt = 0;
			for (int i = 0; i < n; i++){
				if(s[i] % 2 != 0) cnt++;
			}
			if (cnt > n/2) printf("YES");
			else printf("NO");
		}
		else /*if (s[n - 1] % 2 == 0)*/{
			int cnt = 0;
			for (int i = 0; i < n; i++){
				if(s[i] % 2 == 0) cnt++;
			}
			if (cnt > n/2) printf("YES");
			else printf("NO");
		}
		printf("\n");
	}
    return 0;
}
