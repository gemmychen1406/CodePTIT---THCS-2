#include <stdio.h>
#include <ctype.h>

struct phanso{
	int ts, ms;
};
typedef struct phanso ps;
int ucln(int a, int b){
	if (a < b){
		int k = a;
		a = b;
		b = k;
	}
	if (a % b == 0) return b;
	return ucln(b, a % b);
}
int bcnn(int a, int b){
	return a * b / ucln(a, b);
}
//void rutgon(int a, int b){
//	a /= ucln(a, b);
//	b /= ucln(a, b);
//}
//void quydong(int a, int b, int c, int d){
//	rutgon(a, b);
//	rutgon(c, d);
//	a = a * (bcnn(b, d) / b);
//	c = c * (bcnn(b, d) / d);
//	b = bcnn(b,d);
//	printf("%d/%d %d/%d\n", a, b, c, b);
//}
int main () {
	int x;
	scanf("%d", &x);
	for (int i = 1; i <= x; i++){
		ps a, b, c, d;
		scanf("%d%d%d%d", &a.ts, &a.ms, &b.ts, &b.ms);
		printf("Case #%d:\n", i);
//		rutgon(a.ts, a.ms);
//		rutgon(b.ts, b.ms);
		int m = ucln(a.ts, a.ms);
		a.ts /= m;
		a.ms /= m;
		m = ucln(b.ts, b.ms);
		b.ts /= m;
		b.ms /= m;
		int n = bcnn(a.ms, b.ms);
		a.ts *= (n / a.ms);
		b.ts *= (n / b.ms);
		a.ms = n;
		b.ms = n;
		printf("%d/%d %d/%d\n", a.ts, a.ms, b.ts, b.ms);
		c.ts = a.ts + b.ts;
		c.ms = a.ms;
//		rutgon(c.ts, c.ms);
		m = ucln(c.ts, c.ms);
		c.ts /= m;
		c.ms /= m;
		printf("%d/%d\n", c.ts, c.ms);
		d.ts = a.ts * b.ms;
		d.ms = a.ms * b.ts;
//		rutgon(d.ts, d.ms);
		m = ucln(d.ts, d.ms);
		d.ts /= m;
		d.ms /= m;
		printf("%d/%d\n", d.ts, d.ms);
	}
    return 0;
}
