#include <stdio.h>
#include <math.h>
#include <string.h>
void sort(char tmp[200][200], int idx){
    char t[200];
    for(int i = 0; i < idx; ++i){
        for(int j = 0; j < idx; ++j){
            if(strcmp(tmp[i], tmp[j]) < 0){
                strcpy(t, tmp[i]);
                strcpy(tmp[i], tmp[j]);
                strcpy(tmp[j], t);
            }
        }
    }
}
int main () {
	int t;
	scanf("%d", &t);
	while(t--){
		scanf("\n");
		char s1[205];
		gets(s1);
		char *tok1;
		tok1 = strtok(s1," \n");
		char token1[200][200];
		int cnt1 = 0;
		while(tok1){
			int cnt = 1;
			for (int i = 0; i < cnt1; i++){
				if(strcmp(token1[i], tok1) == 0) cnt = 0;
			}
			if (cnt) strcpy(token1[cnt1++], tok1);
			tok1 = strtok(NULL, " \n");
		}
		scanf("\n");
		char s2[205];
		gets(s2);
		char *tok2;
		tok2 = strtok(s2," \n");
		char token2[200][200];
		int cnt2 = 0;
		while(tok2){
			strcpy(token2[cnt2++], tok2);
			tok2 = strtok(NULL, " \n");
		}
		char x[200][200];
		int k = 0;
		for (int i = 0; i < cnt1; ++i)
	    {
	        int ok = 1;
	        for (int j = 0; j < cnt2; ++j)
	            if (strcmp(token1[i], token2[j]) == 0)
	                ok = 0;
	        if (ok)
	            strcpy(x[k++], token1[i]);
	    }
	 
	    sort(x, k);
	    for(int i = 0; i < k; ++i)
	        printf("%s ", x[i]);
	    printf("\n");
	}
    return 0;
}
