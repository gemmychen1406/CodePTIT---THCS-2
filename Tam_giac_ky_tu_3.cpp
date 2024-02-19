#include <stdio.h>

int main () {
	int n;
	scanf("%d", &n);
	char a = 'A';
	for (int i = n - 1; i >= 0; i--){
		int k = a;
		for (int j = n - 1; j > i - 1; j--){
			printf("%c ", k);
			k += j;
		}
		a++;
		printf("\n");
	}
    return 0;
}
