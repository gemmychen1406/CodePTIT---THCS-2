#include <stdio.h>
#include <math.h>

int main () {
	int n, kt = 0, x = 0, cnt = 0;
	scanf("%d", &n);
	int s[n], s1[n];
	for (int i = 0; i < n; i++){
		scanf("%d", &s[i]);
	}
	for (int i = 0; i < n; i++){
		for (int j = 1; j + i < n; j++){
			if (s[i] == s[j+i]){
 				for (int k = 0; k < i; k++) { 
 					if (s[i] == s[k]) { 
 						kt++; 
 					} 
 				} 
 				if (kt == 0) { 
 					x = 1;
 					cnt++;
 					s1[cnt] = s[i];
 				} 
 				kt = 0; 
				break; 
 			} 
 		} 
 	} 
 	if (x == 0) printf("0");
 	else {
 		printf("%d\n", cnt);
 		for (int i = 1; i <= cnt; i++) printf("%d ", s1[i]);
	 }
    return 0;
}
