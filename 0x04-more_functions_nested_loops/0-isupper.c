#include "main.h"
#include<stdio.h>
/**
 * _issuper -checks for uppercase character
 * @letter: the character to be tracked
 * Return: 1 if c is uppercase, 0 otherwise
 */
int _isupper(int c)
{
	if (c >= 'A' && c <= 'z')
	{
		return (1);
	}

	else
	{
		return (0);
	}
}
