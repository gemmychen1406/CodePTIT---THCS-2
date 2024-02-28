#include <stdio.h>
#include <math.h>
#include <string.h>
#include <ctype.h>
int main () {
	char s[1005];
	gets(s);
	char *tok = strtok(s, " \n");
	char token[1005][1005];
	int cnt1 = 0;
	int dem[1005];
	while(tok){
		int cnt = 1;
		int n = strlen(tok);
		for (int i = 0; i < n; i++){
			if (tok[i] >= 'A' && tok[i] <= 'Z') tok[i] += 32;
			//tok[i] = tolower(tok[i]);
		}
		for (int i = 0; i < cnt1; i++){
			if(strcmp(token[i], tok) == 0) {
				cnt = 0;
				dem[i]++;
				break;
			}
		}
		if (cnt) {
			dem[cnt1] = 1;
			strcpy(token[cnt1++], tok);
		}
		tok = strtok(NULL, " \n");
	}
	for (int i = 0; i < cnt1; i++){
		printf("%s %d\n", token[i], dem[i]);
	}
	return 0;
}