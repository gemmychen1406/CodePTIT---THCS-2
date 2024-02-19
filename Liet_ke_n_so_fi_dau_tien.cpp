#include <stdio.h>
#include <math.h>
#include <string.h>

int fi(int x){
	if (x == 0) return 0;
	if (x == 1) return 1;
	return fi(x - 1) + fi(x - 2);
}
int main () {
	int n;
	scanf("%d", &n);
	for (int i = 0; i < n; i++){
		printf("%d ", fi(i));
	}
    return 0;
}
