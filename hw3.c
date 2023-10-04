#include <stdio.h>

int main(void)
{
	int x = 0, y = 0, z = 0;
	for (x = 0; x < 5; x++)
	{
		for (y = 0; y < 5 - x; y++)
		{
			printf(" ");
		}
		for (z = 0; z < x * 2 + 1; z++)
		{
			printf("*");
		}
		printf("\n");
	}
	return 0;
}