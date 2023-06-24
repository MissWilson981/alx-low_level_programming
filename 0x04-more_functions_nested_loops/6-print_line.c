#include "main.h"

/**
 * print_line - draws a straight line in the terminal
 * @: number of times the character _ should be printed
 */
void print_line(int n)
{
	if (n <= 0)
	{
		_putcher('\n');
	} else
	{
		int i;

		for (i = 1; i <= n; i++)
		{
			_putchar('_');
		}
		_putchar('\n');
	}
}
