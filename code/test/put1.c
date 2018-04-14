#include <stdio.h>
void put1(const char *string);
int main(void)
{
	char side_a[10] = "SIDE_A";
	char string[3] = {'A', 'B', 'C'};
	put1(string);

	return 0;
}
void put1(const char *string)
{
	while (*string != '\0')
		putchar(*string++);
}
