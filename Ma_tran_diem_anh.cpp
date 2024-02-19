#include <stdio.h>
#include <math.h>

int main(){
  int t; scanf("%d",&t);
  while(t--){
	long long n,m; scanf("%d%d",&n,&m);
	long long a[n][m];
	char s[10000];
	long long d = 0;
	
	while(d<n){
	  scanf(" %[^\n]",s);
	  for(int i = 0;i<m;i++){
	    a[d][i] = s[i] -'0';
	  }
	  d++;
	}
	long long cn[4][1005] = {0};
	long long cnt = 0;
	for(int i = 0;i<n;i++){
	  for(int j = 0;j<m;j++){
	    if(a[i][j] == 1){
	      cn[0][i]++;
	      cn[1][j]++;
	    }
	    if(a[i][j] == 2){
	      cn[2][i]++;
	      cn[3][j]++;
	    }
	  }
	}
	for(int i = 0;i<n;i++){
	  for(int j = 0;j<m;j++){
	    if(a[i][j] == 1) cnt += cn[2][i]*cn[3][j];
	    if(a[i][j] == 2) cnt += cn[0][i]*cn[1][j];
	  }
	}
	printf("%lld\n",cnt);
  }
}
/*int main () {
	int t;
	scanf("%d", &t);
	while(t--){
		int n, m, cnt = 0;
		scanf("%d%d", &n, &m);
		char a[n][m];
		for (int i = 0; i < n; i++){
			for (int j = 0; j < m; j++) scanf("%c", &a[i][j]);
			scanf("\n");
		}
		for (int i = 0; i < n; i++){
			for (int j = 0; j < m; j++){
				if (a[i][j] != '0'){
					int x = 0, y = 0;
					for (int k = 0; k < n; k++){
						if (k != i && a[k][j] != '0' && a[k][j] != a[i][j]) y++;
					}
					for (int k = 0; k < m; k++){
						if (k != j && a[i][k] != '0' && a[i][k] != a[i][j]) x++;
					}
					if (x == 0 || y == 0) break;
					cnt += x*y;
				}
			}
		}
		printf("%d\n", cnt);
	}
    return 0;
}*/
