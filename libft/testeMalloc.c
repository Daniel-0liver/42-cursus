#include <stdlib.h>
#include <stdio.h>

int main(void) {

	int *p;
	p = (int *) malloc(100 * sizeof(int));

	int i;
	
	for (i = 0; i < 10; ++i) {
		p[i] = i;
	}

	for (i = 0; i < 100; ++i) {
		printf("Addres of p%i = %p | Value of p%i = %i\n", i, &p[i], i, *(p+i));
	}

	return	0;
}