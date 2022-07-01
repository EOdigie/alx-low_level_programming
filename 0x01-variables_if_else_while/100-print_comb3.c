#include <stdio.h>
/*
 * main - Prints all possible different combinations of two digits
 *
 * Return: Always 0
 */
int main(void)
{
	int a;
	int b;

	for (a = 0; a < 9;a++)
	{
		for (b = 0; b < 10; b++)
		{
			if (a != b && a < b)
			{
				putchar((a % 10)+'0');
				putchar((b % 10)+'0');
				{
					if (a == 8)
						continue;
				}
				putchar (',');
				putchar (' ');
			}
		}
	}
	putchar ('\n');
	return (0);
}
