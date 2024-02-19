#include <stdio.h>
#include <math.h>


int main () {
	int t;
	scanf("%d", &t);
	int a[t];
	for (int i = 0; i < t; i++){
		scanf("%d", &a[i]);
	}for (int i = t - 1; i >= 0; i--){
		printf("%d ", a[i]);
	}
    return 0;
}
