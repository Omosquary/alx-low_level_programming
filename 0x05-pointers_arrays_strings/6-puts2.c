#include <stdio.h>
#include "main.h"
/**
 *rev_string - update value.
 *@s: value to be evaluate.
 *Return: not.
 */
void rev_string(char *s)
{
	int i = 0;
	int l = 0;
	char *y = s;
	int e = 0;
	int x;
	char n;

	while (*y != '\0')
	{
		y++;
		i++;
	}
	l = len - 1;
	for ( ; e < ((l / 2) + 1) ; e++)
	{
		x = (l - e);
		n = s[e];
		s[e] = s[x];
		s[x] = n;
	}
}
