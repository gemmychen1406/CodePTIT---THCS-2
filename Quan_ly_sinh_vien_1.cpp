#include <stdio.h>
#include <string.h>
struct hs{
	int id;
	char name[1000];
	float a, b, c;
};
struct hs d[1000];
int main () {
	int h;
	while(1){
		int x;
		scanf("%d", &x);
		if (x == 1){
			scanf("%d", &h);
			for(int i = 1; i <= h; i++){
				scanf("\n");
				d[i].id = i;
				gets(d[i].name);
				scanf("%f%f%f", &d[i].a, &d[i].b, &d[i].c);
			}
			printf("%d\n", h);
		}
		else if (x == 2){
			int k;
			scanf ("%d", &k);																																									
			scanf("\n");
			gets(d[k].name);
			scanf("%f%f%f", &d[k].a, &d[k].b, &d[k].c);
			printf("%d\n", k);
		}
		else {
			for (int i = h; i >= 1; i--){
				printf("%d %s %.1f %.1f %.1f\n", d[i].id, d[i].name, d[i].a, d[i].b, d[i].c);
			}
			return 0;
		}
	}
    
}
