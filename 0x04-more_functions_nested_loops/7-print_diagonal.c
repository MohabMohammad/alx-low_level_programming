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

	if (n <= 0)
		_putchar('\n');
	else
	{
		for (i = 1; i <= n; i++)
		{
			for (j = 1; j < n; j++)
				_putchar(' ');
			_putchar('\\');
			_putchar('\n');
		}
	}
}
