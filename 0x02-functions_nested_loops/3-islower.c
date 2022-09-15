#include "main.h"
/**
 * _islower -function for lowercase
 *Return: 0
 *@c: the input.
 */
int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
	{
		return (1);
	}
	else
		return (0);
}
