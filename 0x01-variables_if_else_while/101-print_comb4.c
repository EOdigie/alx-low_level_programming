#include <stdio.h>
/**
 *main - Prints all possible different combinations of three digits.
 *Numbers must be separated by ,, followed by a space
 *
 * Return: Always 0
 */
int main(void)
{
	int first;
	int second;
	int third;

	for (first = 0; first < 8; first++)
	{
		for (second = first + 1; second < 9; second++)
		{
			for (third = second + 1; third < 10; third++)
			{
				putchar ((first % 10) + '0');
				putchar ((second % 10) + '0');
				putchar ((third % 10) + '0');
				if (first == 7 && second == 8 && third == 9)
					continue;
				putchar (',');
				putchar (' ');
			}
		}
	}
	putchar ('\n');
	return (0);
}
