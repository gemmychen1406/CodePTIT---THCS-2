#include <stdio.h>
#include <math.h>
#include <string.h>

int main () {
	int t, k = 0;
	scanf("%d", &t);
	int u = t - 1;
	int h[100000] = {};
	while(u--){
		int a, b;
		scanf("%d%d", &a, &b);
		h[a]++; h[b]++;
	}
	for (int i = 1; i <= t; i++){
		if (h[i] == t - 1) {
			k = 1;
			break;
		}
	}
	if (k == 1) printf("Yes");
	else printf("No");
    return 0;
}
