#include <stdio.h>
#include <math.h>
int fi(int x){
	if (x == 0) return 0;
	if (x == 1) return 1;
	return fi(x - 1) + fi(x - 2);
}

int main () {
	int n;
	scanf("%d", &n);
	int d = 0;
	for(int i = 1;fi(i)<= n;i++){
		if(fi(i) == n)
			d++;
	}
	if(d==1) printf("1");
	else printf("0");
    return 0;
}
