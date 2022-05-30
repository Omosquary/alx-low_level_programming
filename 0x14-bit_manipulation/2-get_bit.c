#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * get_bit - is a function that returns the value of a bit at a given index
 * @n: is the num input
 * @index: is the index, starting from 0 of the bit
 * Return: the value of the bit at index index or -1 if an error occured
 */

int get_bit(unsigned long int n, unsigned int index)
{
	int bit;

	bit = (n >> index);

	if (index > 32)
	{
		return (-1);
	}

	return (bit & 1);
}
