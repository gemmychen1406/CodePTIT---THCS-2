#include <stdio.h>
#include <math.h>


int main () {
	int a,n,m;
	scanf("%d%d",&n,&m);
	for(int i = 1; i <= n;i++){
		if (m > n) a = m;
		else a = n;
		for(int j = 1; j <= m; j++){
			if (j < i) printf("%c", 96 + a--);
			else printf("%c", 96 + a);
		}
		printf("\n");
	}
    return 0;
}
