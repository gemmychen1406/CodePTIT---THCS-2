#include <stdio.h>

int main(){
	int n;
	scanf("%d",&n);
	char m='A';
	for(int i=n;i>1;i--){
		char k=m;
		for(int j=i;j>0;j--){
			printf("%c",k);
			k += 2;
		}
		m += 2;
		printf("\n");
	}
	printf("%c", m);
}