#include <stdio.h>
#include <math.h>
#include <string.h>

int main () {
	int n;
	scanf("%d", &n);
	while(n--){
		int t, x = 0;
		scanf("%d", &t);
	    for (int i = 1; i <= t; i++){
	    	if (t % i == 0) {
	    		if (i % 2 == 0) x++;
			}
		}
		printf("%d\n", x);
	}
    return 0;
}
