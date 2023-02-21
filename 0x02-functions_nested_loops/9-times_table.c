#include "main.h"
/**
 *times_table- prints 9 times table
 *Return: void
 */
void times_table(void)
{
	int l = 0;
	int i;

	for (i = 0; i <= 10; i++)
	{
		int r = 0;
		int j;

		for(j = 0; j <= 10; j++)
		{
			r = r + l;
			_putchar('0' + r);
			_putchar(',');
			_putchar(' ');
			_putchar(' ');
		}

		l = l + 1;
		_putchar('\n');
	}
}
