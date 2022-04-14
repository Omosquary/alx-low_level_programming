#include "main.h"
/**
* print_line - Write a function that draws a straight line in the terminal.
* @n: Integer amount of _
*/
void print_line(int n)
{
	char x;

	for (x = 0; x < n; x++)
		_putchar('_');
	_putchar('\n');
}
