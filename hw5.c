#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int bin(int n);

int main(void)
{
	int number;
	printf("Please enter a number: ");
	scanf("%d", &number);
	bin(number);
	printf("\n");

	return 0;
}

int bin(int n)
{

	if (n == 0 || n == 1)
		printf("%d", n);
	else
	{
		bin(n / 2);
		printf("%d", n % 2);
	}
	return 0;
}
