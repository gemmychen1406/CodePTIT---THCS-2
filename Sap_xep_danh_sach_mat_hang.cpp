#include <stdio.h>
#include <string.h>
#include <ctype.h>

struct hang {
	int ma;
	char ten[1000];
	char nhom[1000];
	double gmua, gban, lai;
};
void swap(struct hang *a, struct hang *b)
{
    struct hang c = *a;
    *a = *b;
    *b = c;
}

int main () {
	int n;
	scanf("%d", &n);
	struct hang a[1000];
	for (int i = 1; i <= n; i++){
		scanf("\n");
		a[i].ma = i;
		gets(a[i].ten);
		scanf("\n");
		gets(a[i].nhom);
		scanf("%lf%lf", &a[i].gmua, &a[i].gban);
		a[i].lai = a[i].gban - a[i].gmua;
	}
	int max = 0;
	for (int i = 1; i < n; i++){
		for (int j = i + 1; j <= n; j++){
			if (a[i].lai < a[j].lai){
				swap(&a[i],&a[j]);
			}
		}
	}
	for (int i = 1; i <= n; i++){
		printf("%d %s %s %.2lf\n", a[i].ma, a[i].ten, a[i].nhom, a[i].lai);
	}
    return 0;
}
