#include <stdio.h>
#include <math.h>
#include <string.h>

int main () {
	int t;
	scanf("%d ", &t);
	while(t--){
		char s[1005];
		gets(s);
		int n = strlen(s);
		int a[10], x = 0, h = 0;
		if (s[0] == '0') h = 1;
		if (h == 0)
			for (int i = 0; i < n; i++){
				if (s[i] < 48 || s[i] >= 58){
					h = 1;
					break;
				}
			}
		if (h == 0){
			for (int i = 0; i < n; i++){
				int k = 0;
				for (int j = 0; j < x; j++){
					if (s[i] == a[j]) {
						k = 1;
						break;
					}
				}
				if (k == 0){
					a[x] = s[i];
					x++;
				}
			}
			if (x == 10) printf("YES\n");
			else printf("NO\n");
		}
		else if (h == 1)printf("INVALID\n");
	}
    return 0;
}
