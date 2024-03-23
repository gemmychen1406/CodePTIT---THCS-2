#include <stdio.h>
#include <math.h>
#include <string.h>

void plus(char s1[], char s2[], int a, int b){
	for (int i = a - 1; i > 0; i--){
		b--;
		if (b >= 0 && s1[i] + s2[b] - 96 >= 10) {
			s1[i] = s1[i] + s2[b] - 48 - 10;
			s1[i - 1]++;
		}
		else if (b >= 0)s1[i] = s1[i] + s2[b] - 48;
	}
}
void in(char s[], int x){
	for (int i = 0; i < x; i++){
		printf("%c", s[i]);
	}
}
int main () {
	int t;
	scanf("%d ", &t);
	while(t--){
		char s1[505], s2[505];
		scanf("%s\n", s1);
		scanf("%s", s2);
		int a = strlen(s1);
		int b = strlen(s2);
		if (a > b){
			plus(s1, s2, a, b);
			in(s1, a);
		}
		else if (a < b) {
			plus(s2, s1, b, a);
			in(s2, b);
		}
		else {
			plus(s1, s2, a, b);
			int x = 0;
			if (s1[0] + s2[0] - 96 >= 10) {
				s1[0] = s1[0] + s2[0] - 48 - 10;
				x = 1;
			}
			else s1[0] = s1[0] + s2[0] - 48;
			if (x) printf("1");
			in(s1, a);
		}
		printf("\n");
	}
    return 0;
}
