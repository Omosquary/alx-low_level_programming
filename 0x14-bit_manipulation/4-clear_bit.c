#include "main.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * clear_bit - is a function that sets the value of a bit to 0 at a given index
 * @n: input number
 * @index: is the index, starting from 0 of the bit you want to set
 * Return: 1, if it worked, or -1, if an error occured
 */

int clear_bit(unsigned long int *n, unsigned int index)
{
	if (index > 63)
	{
		return (-1);
	}

	*n &= ~(1 << index);

	return (1);
}
