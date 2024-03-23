#include <stdio.h>
#include <math.h>
#include <string.h>
#include <ctype.h>
struct Pokemon_Go {
	char p[1000];
	int k, m, sl;
};
typedef struct Pokemon_Go pg;

int main () {
	int n;
	scanf("%d", &n);
	pg a[75];
	for (int i = 1; i <= n; i++){
		scanf("\n");
		gets(a[i].p);
		scanf("%d%d", &a[i].k, &a[i].m);
		a[i].sl = 0;
		while(a[i].k <= a[i].m){
			a[i].sl++;
			a[i].m = a[i].m - a[i].k + 2;
		}
	}
	int x = 1;
	int max = a[1].sl;
	int sum = a[1].sl;
	for (int i = 2; i <= n; i++){
		sum += a[i].sl;
		if (a[i].sl > max) {
			max = a[i].sl;
			x = i;
		}
	}
	printf("%d\n", sum);
	printf("%s\n", a[x].p);
    return 0;
}
