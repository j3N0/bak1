#include <stdio.h>

int main(void)
{
	unsigned i;
	unsigned long j;
	j = -1;
	i = -1;

	if( i >= 0)
		printf("i >= 0\n");
	if( j >= 0)
		printf("j >= 0\n");

	printf("%u %lu\n", i, j);

	return 0;
}	
