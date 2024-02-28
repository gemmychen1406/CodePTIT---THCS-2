#include <stdio.h>
#include <math.h>
#include <string.h>
void swap(int *x, int *y){
	int z = *x;
	*x = *y;
	*y = z;
}
int main () {
	int t, x = 1;
	scanf("%d", &t);
	while(t--){
		int a, b;
		scanf("%d%d", &a, &b);
		int m[a + 1][b + 1];
		for (int i = 0; i < a; i++){
			for (int j = 0; j < b; j++){
				scanf("%d", &m[i][j]);
				
			}
		}
		printf("Test %d:\n", x++);
		for (int i = 0; i < a; i++){
			for (int j = 0; j < b; j++){
				for (int k = i; k < a; k++)
				for (int h = j; h < b; h++)
				if (m[i][j] > m[k][h]) swap(&m[i][j], &m[k][h]);
				printf("%d ", m[i][j]);
			}
			printf("\n");
		}
	}
    return 0;
}
