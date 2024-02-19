#include <stdio.h>
#include <math.h>

int snt(int x){
	if (x < 2 || x == 4)  return 0;
	if (x == 2 || x == 3 || x == 5)return 1;
	if (x > 5) {
	 for (int i = 2; i*i <= x; i++){
		if (x % i == 0) return 0;
	 }
	}
	return 1;
}
int main () {
	int n;
	scanf("%d", &n);
	int a[n][n];
	int cnt[n];
	for (int i = 0; i < n; i++){
		cnt[i] = 0;
		for (int j = 0; j < n; j++){
			scanf("%d", &a[i][j]);
			if (snt(a[i][j]) == 1) cnt[i]++;
		}
	}
	
		int max = 0;
	for (int i = 0; i < n; i++){
		if (cnt[i] > max) max = cnt[i];
	}
	int ok = 0;
	for (int i = 0; i < n; i++){
		if (cnt[i] == max){
		  ok = 1;
			printf("%d\n", i + 1);
			for (int j = 0; j < n; j++){
				if (snt(a[i][j]) == 1) printf("%d ", a[i][j]);
			}
			if(ok) return 0;
			printf("\n");
		}
	}
    return 0;
}