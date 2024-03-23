#include <stdio.h>
#include <math.h>
#include <string.h>
struct dt{
    int hs,sm;
} P[100],Q[100];
int n,m;
int taodathuc(char s[], struct dt P[])
{
    int i=0;
    char *p = strtok(s, "*x^+ ");
    while(p!=NULL)
	{
        P[i].hs = atoi(p);
        p = strtok(NULL,"*x^+ ");
        P[i].sm = atoi(p);
        i++;
        p = strtok(NULL,"*x^+ ");
    }
    return i;
}
void cong()
{
    struct dt S[100];
    int i=0,j=0,d=0;
    while(i<n&&j<m){
        if(P[i].sm>Q[j].sm) S[d++] = P[i++];
        else if(P[i].sm<Q[j].sm) S[d++] = Q[j++];
        else {
            S[d].sm = P[i].sm;
            S[d].hs = P[i].hs + Q[j].hs;
            d++; i++; j++;
        }
    }
    while(i<n) S[d++] = P[i++];
    while(j<m) S[d++] = Q[j++];
 
    for(i=0;i<d-1;i++)
        printf("%d*x^%d + ",S[i].hs,S[i].sm);
    printf("%d*x^%d\n",S[d-1].hs,S[d-1].sm);
}
int main () {
	int t;
	scanf("%d", &t);
	while(t--){
		char s1[100000], s2[100000];
		scanf("\n");
		gets(s1);
		scanf("\n");
		gets(s2);
		n = taodathuc(s1,P);
        m = taodathuc(s2,Q);
        cong();
	}
    return 0;
}
