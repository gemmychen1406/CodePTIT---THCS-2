#include <stdio.h>
#include <math.h>
#include <string.h>

int Fi(int x){
	if(x == 1 || x == 2) return 1;
	return Fi(x - 1) + Fi(x - 2);
}
int main () {
	int t;
	scanf("%d", &t);
	while(t--){
		int f;
		scanf("%d", &f);
		printf("%d\n", Fi(f));
	}
    return 0;
}
