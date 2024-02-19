#include <stdio.h>
#include <math.h>
#include <string.h>

int main () {
	char s[100005];
	gets(s);
	int n= strlen(s);
	printf("%d",  n - 1);
    return 0;
}
