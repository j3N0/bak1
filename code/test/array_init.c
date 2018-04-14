#include <stdio.h>
int main(void)
{
	int a[6] = {[5] = 114514};

	for(int i = 0; i < sizeof a / sizeof a[0]; i++)
		printf("%d\n", a[i]);

	return 0;
}
