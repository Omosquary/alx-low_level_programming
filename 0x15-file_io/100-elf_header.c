#include <stdio.h>
#include <stdlib.h>

/**
 * main - is a function that prints opcodes of this function
 * @argc: the number of arguments passed
 * @argv: the array of arguments
 * Return: Always 0
 */

int main(int argc, char *argv[])
{
	int x;
	char *ptr;

	if (argc != 2)
	{
		printf("Error\n");
		exit(1);
	}

	x = atoi(argv[1]);

	if (x < 0)
	{
		printf("Error\n");
		exit(2);
	}

	while (x--)
	{
		printf("%02x%c", *ptr++ & 0xff, x ? ' ' : '\n');
	}

	return (0);
}
