#include "main.h"

/**
 * print_line - prints as much underscore as the value of n
 * @n: the number of _
 */

void print_line(int n)
{
	if (n > 0)
	{
		for (n = n; n > 0; n--)
		{
			_putchar('_');
		}
		_putchar('\n');
	}
	else
	{
		_putchar('\n');
	}
}
