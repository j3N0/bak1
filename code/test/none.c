#include <stdio.h>
int main(void)
{
	char side_a[] = "Side A";
	char dont[] = {'A', 'B', 'C'};
	char side_b[] = "Side B";
	puts(dont);

	printf("address of side_a: %p\n", side_a);
	printf("address of dont: %p\n", dont);
	printf("address of side_b: %p\n", side_b);

	return 0;
}
