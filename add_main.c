#include <stdio.h>
#include "add_func.h"

int main(void) {
	int a,b,sum;
	if(scanf("%d%d",&a,&b)!=2) {
		puts("Invalid input!");
		return 1;
	}
	sum = add(a,b);
	if(!add_check(a,b,sum)) {
		puts("Validation failed! (overflow?)");
		return 2;
	}
	printf("%d + %d = %d\n",a,b,add(a,b));
	return 0;
}
