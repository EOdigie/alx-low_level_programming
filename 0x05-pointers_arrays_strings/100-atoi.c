#include "main.h"

/**
 * _atoi - Convert a string to an integer.
 * @s: The string to convert
 *
 * Return: conversion result
 */
int _atoi(char *s)
{
	int c = 0;
	unsigned int n = 0;
	int sign = 1;
	int flag = 0;

	while (s[c])
	{
		if (s[c] == 45)
		{
			sign *= -1;
		}

		while (s[c] >= 48 && s[c] <= 57)
		{
		       flag = 1;
			n = (n * 10) + (s[c] - '0');
			c++;
		}

		if (flag == 1)
		{
			break;
		}

		c++;
	}

	n *= sign;
	return (n);
}
