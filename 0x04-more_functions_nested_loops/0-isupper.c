#include "main.h"

/**
 * _isupper - a fuunction that checks for uppercase character
 * @c: input
 * Return: 1 if c is uppercase, and 0 if otherwise
 */
int _isupper(int c)
{
	if ((c >= 'A') && (c <= 'Z'))
		return (1);
	else
		return (0);
}
