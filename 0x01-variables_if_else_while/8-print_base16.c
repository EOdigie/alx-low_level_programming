#include <stdio.h>
/*Write a program that prints all the numbers of base 16 in lowercase, followed by a new line.
 *You can only use the putchar function (every other function (printf, puts, etc…) is forbidden)
 *All your code should be in the main function
 *You can only use putchar three times in your code
 *
 */
int main(void)
{
	int n;
	char ch;

	for (n=0; n<10; n++)
	{
		putchar(n%10 +'0');
	}
	for (ch='a';ch<='f';ch++)
	{
		putchar(ch);
	}
	putchar('\n');
	return(0);
}
