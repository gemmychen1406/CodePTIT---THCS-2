#include <stdio.h>
#include <math.h>
#include <string.h>

int main(){
   int t; scanf("%d",&t);
   while(t--){
     int n; scanf("%d",&n);
     int a[n];
     int d[100000] = {0};
     int m = -1e9;
     for(int i = 0;i<n;i++){
       scanf("%d",&a[i]);
       d[a[i]]++;
       if(d[a[i]] > m) m = d[a[i]];
     }
     for(int i = 0;i<n;i++){
       if(d[a[i]] == m){
         printf("%d ",a[i]);
         d[a[i]] = 0;
       }
     }
     printf("\n");
   }
}
