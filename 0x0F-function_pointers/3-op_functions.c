#include <stdio.h>
#include <stdlib.h>
/**
 * op_add - is a function that performs addition
 * @a: sumnd 1
 * @b: sumnd 2
 * Return: a+b
 */
int op_add(int a, int b)
{
	return (a + b);
}

/**
 * op_sub - is a function that performs substration
 * @a: minuend
 * @b: sustrnd
 * Return: a - b
 */
int op_sub(int a, int b)
{
	return (a - b);
}

/**
 * op_mul - is a function that performs multiplication
 * @a: multp 1
 * @b: multp 2
 * Return: a * b
 */
int op_mul(int a, int b)
{
	return (a * b);
}

/**
 * op_div - is a function that performs division
 * @a: divisr
 * @b: dividndo
 * Return: a / b
 */
int op_div(int a, int b)
{
	if (b == 0)
	{
		return (-1);
	}
	return (a / b);
}

/**
 * op_mod - calculates mod of two ints
 * @a: number 1
 * @b: number 2
 * Return: mod of 1, 2
 **/
int op_mod(int a, int b)
{
	if (b == 0)
		return (-1);
	return (a % b);
}
