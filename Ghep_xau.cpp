#include <stdio.h>
#include <math.h>
#include <string.h>
int cmp(char a[], char b[])
{
    char c[500], d[500];
    strcpy(c, a);
    strcpy(d, b);
    strcat(c, b);
    strcat(d, a);
    if (strcmp(c, d) > 0)
        return 1;
    return 0;
}
void swap(char x[], char y[]){
	char z[12];
	strcpy(z, x);
	strcpy(x, y);
	strcpy(y, z);
}
int main () {
	int t;
	scanf("%d", &t);
	while(t--){
		int n;
		scanf("%d", &n);
		scanf(" ");
		char a[n][12];
		for (int i = 0; i < n; i++){
			scanf("%s", &a[i]);
		}
		for (int i = 0; i < n - 1; i++){
			for (int j = i + 1; j < n; j++){
				if (cmp(a[i], a[j]))
				swap(a[i], a[j]);
			}
		}
		for (int i = 0; i < n; i++){
			printf("%s", a[i]);
		}
//		char s[1005];
//		gets(s);
//		char *tok = strtok(s, " \n");
//		char token[1005][1005];
//		int cnt1 = 0;
//		int dem[1005];
//		while(tok){
//			strcpy(token[cnt1++], tok);
//			tok = strtok(NULL, " \n");
//		}
//		for (int i = 0; i < n - 1; i++){
//			for (int j = i + 1; j < n; j++){
//				if (strcmp(token[i], token[j]) > 0)
//				swap(token[i], token[j]);
//			}
//		}
//		for (int i = 0; i < n; i++){
//			printf("%s", token[i]);
//		}
		printf("\n");
	}
    return 0;
}
