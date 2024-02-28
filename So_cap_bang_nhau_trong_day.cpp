#include <stdio.h>

void nhap(int a[],int n){
	for(int i = 0;i < n;i++){
		scanf("%d",&a[i]);
	}
}

int check(int a[],int n){
	int dem = 0;
	for(int i = 0;i < n;i++){
		if(a[i] == a[i+1])
			dem++;
	}
	printf("%d\n",dem);
}
int main(){
	int t,a[100];
	scanf("%d",&t);
	while(t--){
		int n;
		scanf("%d",&n);
		nhap(a,n);
		check(a,n);
	}	
}

