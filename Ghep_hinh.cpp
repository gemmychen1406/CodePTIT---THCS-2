#include <stdio.h>
#include <math.h>

int c_ghep(int x, int y, int z){
	if (x == y + z) return x;
	if (y == z + x) return y;
	return z; 
}

int c_bang(int x, int y, int z){
	if (x == y) return x + z;
	if (y == z) return y + x;
	return z + y; 
}

int check(int a1, int b1, int a2, int b2, int a3, int b3){	
	if (c_ghep(a1, a2, a3) == c_bang(b1, b2, b3) || c_ghep(a1, b2, a3) == c_bang(b1, a2, b3) || c_ghep(a1, a2, b3) == c_bang(b1, b2, a3) || c_ghep(a1, b2, b3) == c_bang(b1, a2, a3) || c_ghep(b1, a2, a3) == c_bang(a1, b2, b3)||c_ghep(b1, b2, a3) == c_bang(a1, a2, b3)||c_ghep(b1, a2, b3) == c_bang(a1, b2, a3) || c_ghep(b1, b2, b3) == c_bang(a1, a2, a3)) return 1;
	return 0;
}
int main () {
	int a1, b1, a2, b2, a3, b3;
	scanf("%d%d%d%d%d%d", &a1, &b1, &a2, &b2, &a3, &b3);
	if (check(a1, b1, a2, b2, a3, b3) == 1) printf("YES");
	else printf("NO");
    return 0;
}
