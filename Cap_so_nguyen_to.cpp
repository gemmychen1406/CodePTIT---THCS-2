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
	scanf("%d ", &t);
	while(t--){
		int n;
		scanf("%d", &n);
		for (int i = 2; i <= n/2; i++){
			if (b[i] == 1 && b[n - i] == 1) printf("%d %d ", i, n - i);
		}
		printf("\n");
	}
    return 0;
}
