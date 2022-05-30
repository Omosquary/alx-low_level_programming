#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * set_bit - is a function that sets the value of a bit to 1 at a given index
 * @n: is the num input
 * @index: is the index starting from 0 of the bit
 * Return: 1 if it worked or -1, if an error occured.
 */

int set_bit(unsigned long int *n, unsigned int index)
{
	if (index > sizeof(n) * 8)
	{
		return (-1);
	}

	*n |= (1 << index);

	return (1);
}
