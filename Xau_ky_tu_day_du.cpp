#include <stdio.h>
#include <math.h>
#include <string.h>

int main () {
	char s[1005];
	scanf("%s", s);
	int n = strlen(s), max = 0;
	int c[n];
	for (int i = 0; i < n; i++){
		c[i] = 1;
		for (int j = 0; j < i; j++){
			if (s[i] > s[j] && c[i] <= c[j]){
				c[i] = c[j] + 1;
			}
		}
		if (max < c[i]){
			max = c[i];
		}
	}
	printf("%d", 26 - max);
    return 0;
}
