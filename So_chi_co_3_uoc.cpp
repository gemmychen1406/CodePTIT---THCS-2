#include <stdio.h>
#include <math.h>
#include <string.h>

int b[1000001];
void sangnguyento() {
    for(int i = 0; i <= 1000001; i++) 
        b[i] = 1;
        b[0] = b[1] =0;
        for(int i = 2; i <= 1000; i++) { 
            if(b[i]){ 
                for(int j=i*i; j <= 1000000; j+=i) { 
                    b[j]=0; 
                     
                }
            }   
    	}   
}
int main () {
	sangnguyento();
	int t;
	scanf("%d", &t);
	while(t--){
		int l, r, n = 0;
		scanf("%d%d",&l,&r);
		for (int i = l; i <= r;i++){
			if (sqrt(i) == (int)sqrt(i)){
				int h = sqrt(i);
				if (b[h] == 1)n++;
			}
		}
		printf("%d\n", n);
	}
    return 0;
}
