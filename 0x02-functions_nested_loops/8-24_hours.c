#include "main.h"
/**
 *jack_bauer: printsminutes of day
 *Return: void
 */
void jack_bauer(void)
{
	char a;
	int i1;
	int i2;

	for (i1 = 0; i1 < 24; i1++)
	{
		if (i1 == 0)
			a = '0';
		else
			a = '0' + i1;

		for (i2 = 0; i2 < 59; i2++)
		{
			_putchar(a);
			if (i1 == 0)
				_putchar('0');
			_putchar(':');
			if (i2 == 0)
				_putchar('0');
			_putchar( '0' + i2);
		}
		_putchar('\n');
	}
}
