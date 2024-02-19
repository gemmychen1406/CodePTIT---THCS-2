#include <stdio.h>
#include <math.h>

void pt2(int n){
	for(int i = 2;i <= sqrt(n);i++){
		if(n % i==0){
			int dem =0;
			while(n % i ==0){
				dem++;
				n /= i;
			}
			printf("%d(%d)",i,dem);
			printf(" ");
		}
	}
	if(n !=1){
		printf("%d(1)",n);
	}
}
int main(){
	int t,i=0;
	scanf("%d",&t);
	while(t--){
		int n;
		scanf("%d",&n);
		i +=1;
		printf("Test %d: ",i);
		pt2(n);
		printf("\n");
	}
}

