#include <stdio.h>

/**
 * main - This code will print 10 base numbers
 * starting with 0, followed by
 * a new line
 * Return: Always 0
 */
int main(void)
{
	int n = 0;

	while (n < 10)
	{
		printf("%d", n);
		n++;
	}
	printf("\n");
	return (0);
}
