#include <stdio.h>
#include <string.h>
#include <ctype.h>

struct thisinh{
	int ma;
	char ten[1000];
	char ns[50];
	float m1, m2, m3, tong;
};
void swap(struct thisinh *a, struct thisinh *b)
{
    struct thisinh c = *a;
    *a = *b;
    *b = c;
}

int main () {
	int n;
	scanf("%d", &n);
	struct thisinh a[1000];
	for (int i = 1; i <= n; i++){
		scanf("\n");
		a[i].ma = i;
		gets(a[i].ten);
		scanf("\n");
		gets(a[i].ns);
		scanf("%f%f%f", &a[i].m1, &a[i].m2, &a[i].m3);
		a[i].tong = (a[i].m1 + a[i].m2 + a[i].m3) ;
	}
	for (int i = 1; i < n; i++){
		for (int j = i + 1; j <= n; j++){
			if (a[i].tong < a[j].tong) swap(&a[i], &a[j]);
		}
	}
	for (int i = 1; i <= n; i++){
		printf("%d %s %s %.1f\n", a[i].ma, a[i].ten, a[i].ns, a[i].tong);
	}
    return 0;
}
