#include "main.h"

/**
 *  _puts - prints a string followed by a new line..
 *  @str: the string to print.
 */

void _puts(char *str)
{
	int m;
	char *c;

	c= str;

	for (m = 0; c[m]; m++)
	{
		_putchar (c[m]);
	}
	_putchar ('\n');
}
