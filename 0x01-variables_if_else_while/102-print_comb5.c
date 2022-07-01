#include <stdio.h>
/**
 *Write a program that prints all possible combinations of two two-digit numbers.
 *The numbers should range from 0 to 99
 *The two numbers should be separated by a space
 *Return: Always 0.
 */
int main(void)
{
	int first;
	int second;

	for (first = 0; first < 99; first++)
	{
		for (second = 0; second < 100; second++)
		{
			if (first != second && first < second)
			{
				putchar ((first / 10) + '0');
				putchar ((first % 10) + '0');
				putchar (' ');
				putchar ((second / 10) + '0');
				putchar ((second % 10)+ '0');
				if (first == 98)
					continue;
				putchar (',');
				putchar (' ');
			}
		}
	}
	putchar ('\n');
	return (0);
}

