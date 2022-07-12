#include "main.h"

/**
 * _strlen - calculates length of a string
 * @s: string to calculate
 *
 * Return: int length of the string
 */

int _strlen(char *s)
{
	int length = 0;

	while (s[length])
		length++;
	return (length);
}
