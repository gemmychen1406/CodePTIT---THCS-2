#include<stdio.h>
#include<string.h>
int main(){
	int t;
	scanf("%d",&t);
	for(int k=1;k<=t;k++){
		char s1[505];
		char s2[50];
		char a[200][50];
		scanf("\n");
		gets(s1);
		scanf("%s",s2);
		char *token;
		token=strtok(s1," ");
		int n=0;
	    while(token!=NULL){
			strcpy(a[n],token);
		    n++;
			token=strtok(NULL," ");
		}
		printf("Test %d:",k);
		for(int i=0;i<n;i++){
			if(strlen(a[i])!=strlen(s2)) printf(" %s",a[i]);
		    else{
				int m=0;
				char tmp[50];
				strcpy(tmp,a[i]);
				for(int j=0;j<strlen(s2);j++){
					if(tmp[j]-32!=s2[j]&&tmp[j]+32!=s2[j]&&tmp[j]!=s2[j]){
						m=1;
						break;
					}
				}
				if(m==1) printf(" %s",a[i]);
			}
		}
		printf("\n");
	}
}