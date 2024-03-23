#include<stdio.h>
#include <math.h>

int snt(int n){
	for(int i =2;i <= sqrt(n);i++){
		if(n % i==0)
			return 0;
	}
	return n>1;
}
int tong(int n){
	int s = 0;
	while(n != 0){
		int tmp = n%10;
		s += tmp;
		 n/= 10;
	}
	return s;
}
int fb(int n){
    if(n==1||n==0||n==2||n==3) return n;
   return fb(n-2)+fb(n-1);
}

int kt(int n){
	int d = 0;
	for(int i = 1;fb(i)<= n;i++){
		if(fb(i) == n)
			d++;
	}
	if(d==1) return 1;
	return 0;
}
int main(){
	int a,b;
	scanf("%d%d",&a,&b);
	if(a<b){
		for(int i=a;i<=b;i++){
		if(snt(i) && kt(tong(i))==1)
   			printf("%d ",i);	
   		}	
	}else{
		for(int i=b;i<=a;i++){
		if(snt(i) && kt(tong(i))==1)
   			printf("%d ",i);	
   		}
	}
} 

