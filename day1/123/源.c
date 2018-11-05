#include <stdio.h>
#include <stdlib.h>
int main(void) {
	int a;
	int *p;
	p = &a;
	*p = 32;
	printf("dfsd=%d", *p);

}