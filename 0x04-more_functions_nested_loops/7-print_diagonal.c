#include "main.h"
/**
 *print_diagonal- prints a diagonal line on screen
 *Return: void
 *@n: number of \ characters to be printed
 */
void print_diagonal(int n)
{
	int i;
	int j;

	for (i = 0; i <= n; ++i)
	{
		for (j = 0; j <= n - 1; ++j)
		{
			_putchar(' ');
		}
		_putchar('\\');
		_putchar('\n');
	}
	_putchar('\n');
}
