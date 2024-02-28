#include <stdio.h>
#include <math.h>
#include <string.h>
struct diem{
	double x, y;
};
double canh(struct diem a, struct diem b){
	return sqrt((a.x- b.x)*(a.x-b.x) + (a.y - b.y) * (a.y - b.y));
}
int checktg(double a, double b, double c){
	if (a == 0 || b == 0 || c == 0) return 0;
	if (a + b > c && a + c > b && b + c > a) return 1;
	return 0;
}
double cv(double a, double b, double c){
	return a + b + c;
}
int main () {
	int t;
	scanf("%d", &t);
	while(t--){
		struct diem a, b, c;
		scanf("%lf%lf%lf%lf%lf%lf", &a.x, &a.y, &b.x, &b.y, &c.x, &c.y);
		double A = canh(a, b), B = canh(a,c), C = canh(b, c);
		if (checktg(A, B, C)){
			printf("%.3lf\n", cv(A, B, C));
		}
		else printf("INVALID\n");
	}
    return 0;
}
