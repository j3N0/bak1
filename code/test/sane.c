#include <stdio.h>

int main(void)
{
	char *a = "haha";

	int i = 0;
	while(1)
		putchar(a++);

	return 0;
}
