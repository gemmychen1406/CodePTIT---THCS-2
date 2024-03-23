#include <stdio.h>
#include <math.h>

int tongchuso(int x){
	int sum = 0;
	while(x!= 0){
		sum += x % 10;
		x /= 10;
	}
	return sum;
}
int tongcspt(int n) {
	int sum = 0;
	int i = 2;
	while(n > 1){
		if (n == i) break;
		if(n % i == 0){
			if (i <= 9) sum += i;
			else {
				int k = tongchuso(i);
				sum += k;
			}
			n = n/i;
		}
		else i++;
	}
	if (n <= 9) sum += n;
	else {
		int k = tongchuso(n);
		sum += k;
	}
    return sum;
}
int main () {
	int n;
	scanf("%d", &n);
	//printf("%d %d\n", tongchuso(n), tongcspt(n));
	if (tongchuso(n) == tongcspt(n)) printf("YES");
	else printf("NO");
    return 0;
}
