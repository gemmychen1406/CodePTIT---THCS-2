#include <stdio.h>
#include <math.h>
#include <string.h>

int main () {
	int t;
	scanf("%d", &t);
	while(t--){
		char a[20];
		scanf("%s", a);
		int n = strlen(a), x = 0;
		for (int i = 0; i < n; i++){
			if (a[i] % 2 != 0) {
				x = 1;
				break;
			}
		}
		if (x) printf("NO");
		else printf("YES");
		printf("\n");
	}
    return 0;
}
