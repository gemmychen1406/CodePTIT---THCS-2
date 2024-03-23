#include <stdio.h>
#include <math.h>
#include <string.h>

int main () {
	int t;
	scanf("%d", &t);
	while(t--){
		int n;
		scanf("%d", &n);
		int a[n];
		for (int i = 0; i < n; i++){
			scanf("%d", &a[i]);
		}
		int x = 0;
		for (int i = 0; i < n; i++){
			for (int j = i + 1; j < n; j++){
				if (a[i] == a[j]) {
					printf("%d\n", a[i]);
					x = 1;
					break;
				}
			}
			if (x) break;
		}
		if (x == 0) printf("NO\n");
	}
    return 0;
}
