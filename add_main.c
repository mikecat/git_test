#include <stdio.h>

int add(int,int);

int main(void) {
	int a,b;
	scanf("%d%d",&a,&b);
	printf("%d + %d = %d\n",a,b,add(a,b));
	return 0;
}
