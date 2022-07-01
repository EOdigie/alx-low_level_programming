#include <stdio.h>
/*
 * Write a program that prints all possible different combinations of three digits.
 *Numbers must be separated by ,, followed by a space
 *The three digits must be different
 *012, 120, 102, 021, 201, 210 are considered the same combination of the three digits 0, 1 and 2
 *Print only the smallest combination of three digits
 *Numbers should be printed in ascending order, with three digits
 *You can only use the putchar function (every other function (printf, puts, etc…) is forbidden)
 *You can only use putchar six times maximum in your code
 *You are not allowed to use any variable of type char
 *All your code should be in the main function
 */
int main(void)
{
	int first;
	int second;
	int third;

	for (first=0; first<8; first++)
	{
		for (second=0; second<9; second++)
		{
			for (third=0; third<10; third++)
			{
				if (first!=second && second!=third && first!=third)
				{
					if(first<second && second<third)
					{
						putchar(first%10 + '0');
						putchar(second%10 +'0');
						putchar(third%10 + '0');
					
						if (first==7)
							continue;

						putchar(',');
						putchar(' ');
					}
				}
			}
		}
	}
	putchar('\n');
	return(0);
}
