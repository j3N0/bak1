#include <stdio.h>

int main(void)
{
	int n, status;
	printf("please enter an integer:\n");
	while( (status = scanf("%d", &n)) != 1)
	{
		if(status != 1)
			scanf("%*s");
		printf("Integer please!\n");
	}

	return 0;
}
