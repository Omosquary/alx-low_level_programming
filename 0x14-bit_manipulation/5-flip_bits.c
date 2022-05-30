#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * flip_bits - is a function that returns the number of bits flipped
 * @n: input number1
 * @m: input number2
 * Return: number of bits.
 */

unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	int x = 0;
	unsigned long int number;

	number = n ^ m;

	while (number)
	{
		x++;
		number &= (number - 1);
	}

	return (x);
}
