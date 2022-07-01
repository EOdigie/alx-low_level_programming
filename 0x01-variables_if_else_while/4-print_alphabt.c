#include <stdio.h>
/*Write a program that prints the alphabet in lowercase,
 *Print all the letters except q and e
 *followed by a new line.
 */
int main(void)
{
	char ch;
	
	for (ch = 'a'; ch <= 'z'; ch++)
	{
		if (ch != 'q' && ch != 'e')
		{
			putchar(ch);
		}
	}
	putchar('\n');
	return (0);
}
