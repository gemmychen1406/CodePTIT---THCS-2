#include <stdio.h>
#include <math.h>
#include <string.h>
int n = 0;
struct longword{
	char word[100];
	int sl;
};
struct longword list[1005];
int search(char s[])
{
	for(int i = 0; i < n; i++)
	{
		if(strcmp(list[i].word, s)==0) return i;
	}
	return -1;
}
int thuannghich(char s[]){
	int n = strlen(s);
	for (int i = 0; i < n/2; i++){
		if (s[i] != s[n - i - 1]) return 0;
	}
	return 1;
}
int main () {
	char p[100];
	while(scanf("%s ", p) != -1){
		int m = search(p);
		if(m == -1)
		{
			strcpy(list[n].word, p);
			list[n].sl = 1;
			n++;
		}
		else list[m].sl++;
	}
	int t = 0;
	for(int i = 0; i < n; i++)
		if(strlen(list[i].word) > t && thuannghich(list[i].word))
			t = strlen(list[i].word);
	for(int i = 0; i < n; i++)
		if(strlen(list[i].word) == t && thuannghich(list[i].word))
			 printf("%s %d\n",list[i].word, list[i].sl);
    return 0;
}
