#include<stdio.h>
#include<string.h>
int lam(char a[], char b[], char c[], int n){
    int d = 0; char tam[400];
    for(int i = 1; i <= 2*n; i++){
        d = 0;
        for(int j = 0; j < n; j++){
            tam[d++] = b[j];
            tam[d++] = a[j];
        }
        tam[d] = '\0';
        if(strcmp(c, tam) == 0) return i;
        for(int j = 0; j < n; j++){
            a[j] = tam[j];
            b[j] = tam[j+n];
        }
    }
    return -1;

}

main(){
    char a[200], b[200], c[400]; 
	int n;
    while(5)
	{
        scanf("%d", &n);
        if(n == 0) break;
        scanf("%s %s %s", &a, &b, &c);
        printf("%d\n", lam(a,b,c,n));
    }
}
