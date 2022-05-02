#include "main.h"
/**
 * _atoi - is a function
 * @s: pointer
 * Return: int.
 */

int _atoi(char *s)
{
	int y = 0;

	while (s[y] != '\0')
	{
		_putchar(s[y]);
		s++;
	}
	return (0);
}
