#include "main.h"
/**
 * _isalpha - function to check letter
 * @c: is the int
 *Return: 0
 */
int _isalpha(int c)
{
	if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
	{
	return (1);
	}
	else
	return (0);
}
