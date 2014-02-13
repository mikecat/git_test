#include <stdio.h>

int add(int,int);

int main(void) {
	int a,b;
	if(scanf("%d%d",&a,&b)!=2) {
		puts("Invalid input!");
		return 1;
	}
	printf("%d + %d = %d\n",a,b,add(a,b));
	return 0;
}
