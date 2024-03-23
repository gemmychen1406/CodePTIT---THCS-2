#include <stdio.h>
#include <string.h>

void tachvatong(char a[], char b[])
{
	int n = strlen(a);
	char x[105], y[105];
	int h = n/2;
	for(int i = 0; i < n/2; i++)
	{
		x[h-1] = a[i];
		h--;
	}
	int k;
	if(n%2==0) k = n/2;
	else k = n/2 + 1;
	for(int i = n/2; i < n; i++)
	{
		y[k - 1] = a[i];
		k--;
	}
	char c[105]; int nho = 0;
	for(int i = 0; i < n/2; i++)
	{
		c[i] = x[i] + y[i] + nho - '0';
		if (c[i] > '9'){
			c[i] -= 10;
			nho = 1;
		}
		else {
			nho = 0;
		}
	}
	if(nho == 1 && n % 2 == 1) c[n/2] = nho + y[n/2];
	else c[n/2] = nho + '0';
	int d;
	if(c[n/2] != '0') d = n/2 + 1;
	else d = n/2;
	int s = 0;
	for(int i = d - 1; i >= 0; i--)
	{
		b[s] = c[i];
		s++;
	}
	b[s] = '\0';
	printf("%s\n", b);
}

int main(){
	char a[205], b[205];
	scanf("%s", a);
	strcpy(b, a);
	int n = strlen(b);
	while(n > 1)
	{
		char x[105];
		tachvatong(b, x);
		strcpy(b, x);
		n = strlen(b);
	}
	return 0;
}

