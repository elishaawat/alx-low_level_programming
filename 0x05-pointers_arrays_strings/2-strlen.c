#include "main.h"

/**
 *_strlen - calculate the length of a string.
 *@s: the string to calculate it's length.
 *Return: length of a string.
 */

int _strlen(char *s)
{
	int u;

	u = 0;
	while (s[u] != '\0')
	{
		u++;
	}
	return (u);
}
