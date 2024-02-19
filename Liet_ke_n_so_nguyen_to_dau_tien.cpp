#include <stdio.h>
#include <math.h>

int check_snt(int x) {
	if (x <= 5){
		if (x == 2 || x == 3 || x == 5) return 1;
		else return 0;
	}
	else {
		for (int i = 2; i <= sqrt(x); i++){
			if (x % i == 0) return 0;
		}
	}
	return 1;
}

int main(){
	int n;
	scanf("%d", &n);
	int i = 0, count = 0;
	while(count < n){
		if(check_snt(i)){
			printf("%d\n",i);
			count++;
		}
		i++;
	}
}
