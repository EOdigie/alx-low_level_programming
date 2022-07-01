#include <stdio.h>
/*Write a program that prints all possible different combinations of two digits.
 *Numbers must be separated by ,, followed by a space
 *The two digits must be different
 *01 and 10 are considered the same combination of the two digits 0 and 1
 *Print only the smallest combination of two digits
 *Numbers should be printed in ascending order, with two digits
 *You can only use the putchar function (every other function (printf, puts, etc…) is forbidden)
 *You can only use putchar five times maximum in your code
 *You are not allowed to use any variable of type char
 *All your code should be in the main function
 */
int main(void)
{
	int a; //first digit
	int b; //second digit
	for (a=0; a<9;a++) // for loop for the first digit
	{ 
		for (b=0; b<10; b++) // for loop for the second digit
		{

			if (a!=b && a<b) // if statement - if first digit is not the same as second digit and first digit is less than second digit 
			{
				putchar(a%10+'0');putchar(b%10+'0');
				{
					if (a==8)
						continue;
				}
				putchar(',');
				putchar(' ');	
			}
		
		}
	
	}
	putchar('\n');
	return(0);
}
