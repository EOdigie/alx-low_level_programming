#include <stdio.h>

/**
 * main - prints the first 50 Fibonacci numbers, starting with 1 and 2
 * followed by a new line
 * Return: Always 0 (Success)
 */
int main(void)
{
	long int a, b, i, next;

	a = 1;
	b = 2;

	while (i <= 50)
	{
		next = a + b;
		a = b;
		b = next;
		printf("%lu", next);

		if (i < 50)
		{
			printf(", ");
		}
		i++;
	}
	putchar('\n');
	return (0);
}
