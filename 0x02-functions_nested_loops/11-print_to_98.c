#include <stdio.h>

/**
 * print - Prints all natural numbers from input to 98,
 * @n: the number 
 */
void print_to_98(int n)
{
	if  (n >= 98)
	{
		while (n > 98)
			printf("%d, ", n--);
		printf("%d\n", n);
	}
	else
	{
		while(n < 98)
			printf("%d, ", n++);
		printf("%d\n", n);
	}
}
