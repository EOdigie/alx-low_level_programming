/*
 * File: 0-positive_or_negative.c
 * Owner: Edugie Odigie
 */
#include <stdio.h>
/**
 * main - Prints alphabets in lowercase and then in uppercase
 *
 * Return: Always 0.
*/
int main(void)
{
	char ch;
	char CH;

	{
		for (ch = 'a'; ch <= 'z'; ch++)
			putchar(ch);
		for (CH = 'A'; CH <= 'Z'; CH++)
			putchar(CH);
		putchar ('\n');
	}
	return (0);
}
