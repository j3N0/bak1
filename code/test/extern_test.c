#include <stdio.h>

int traveler = 1;
static int stayhome = 1;

int main(void)
{
	extern int traveler;
	extern int stayhome;
	printf("traveler is %d\n", traveler);
	printf("stayhome is %d\n", stayhome);

	return 0;
}
