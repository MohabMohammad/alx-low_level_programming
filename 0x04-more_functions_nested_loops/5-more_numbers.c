#include "main.h"
/**
 *more_numbers- prints 10 times numbers 0-14
 *Return: void
 */
void more_numbers(void)
{
	int i;
	int j;

	for (i = 0; i < 11; ++i)
	{
		for (j = 0; j < 15; ++j)
		{
			_putchar('0' + j);
		}
		_putchar('\n');
	}
	_putchar('\n');
}
