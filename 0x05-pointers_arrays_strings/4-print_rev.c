#include "main.h"

/**
 * print_rev - Prints a string in reverse order
 * @s: string to reverse
 * Return: 0
 */

void print_rev(char *s)
{
	int len = strlen(s);

	while (len--)
		putchar(*s + len));
	putchar(10);
}
