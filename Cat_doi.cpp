#include <stdio.h>
#include <math.h>
#include <string.h>

void cat_doi(char a[]){
	int n = strlen(a);
	int check = 1;
	long long c = 0;
	for (int i = 0; i < n; i++){
		if (check == 0) break;
		if (a[i] == '8' || a[i] == '0' || a[i] == '9') a[i] = '0';
		else if (a[i] == '1') a[i] = '1';
		else  check = 0;
	}
	if (check == 0) printf("INVALID");
	else {
		
	}
}

int main () {
	int t;
	scanf("%d ", &t);
	while(t--){
		char a[20];
		scanf("%s", a);
		cat_doi(a);
		printf("\n");
	}
    return 0;
}
