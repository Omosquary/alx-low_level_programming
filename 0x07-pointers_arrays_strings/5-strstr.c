#include "main.h"
/**
 * _strstr - a function that locates a substring
 * @haystack: locate a substring
 * @needle: substring to locate
 *
 * Return: pointer to the beginning of the located substring,
 * or NULL, if substring is not found
 */
char *_strstr(char *haystack, char *needle)
{
	char *x = haystack;
	char *y = needle;

	while (*x)
	{
		y = needle;
		x = haystack;
		while (*y)
		{
			if (*x == *y)
			{
				y++;
				x++;
			}
			else
				break;
		}
		if (*y == '\0')
			return (haystack);
		haystack++;
	}
	return (0);
}
