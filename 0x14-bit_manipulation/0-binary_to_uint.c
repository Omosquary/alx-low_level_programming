#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * binary_to_uint - is a function that converts binary to unsigned integer
 * @b: string of 0 and 1 chars
 * Return: the converted number, or 0 if other string or b is NULL.
 */

unsigned int binary_to_uint(const char *b)
{
	unsigned int number = 0;
	int x = 0;

	if (b == NULL)
	{
		return (0);
	}

	while (b[x])
	{
		if (b[x] > '1' || b[x] < '0')
		{
			return (0);
		}
		else
		{
			number = (2 * number + (b[x] - '0'));
			x++;
		}
	}

		return (number);
}
