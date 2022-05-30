#include "main.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * print_binary - is a function that prints binary rep. of a number
 * @n: is the number input
 * Return: void.
 */

void print_binary(unsigned long int n)
{
	int x = 0;
	int y = 0;
	unsigned long int number;

	for (x = 63; x >= 0; x--)
	{
		number = n >> x;

		if (number & 1)
		{
			printf("1");
			y++;
		}
		else if (y)
		{
			printf("0");
		}
	}

	if (!y)
	{
		printf("0");
	}
}
