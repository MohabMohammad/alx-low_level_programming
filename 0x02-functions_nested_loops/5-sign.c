#include "main.h"
/**
 *print_sign- prints sign of number or if it's 0
 *Return: 1 if positive, -1 if negative, 0 if 0
 *@n: the number to be checked
 */
int print_sign(int n)
{
	if (n > 0)
	{
		_putchar('+');
		return (1);
	}

	else if (n < 0)
	{
		_putchar('-');
		return (-1);
	}

	else
	{
		_putchar('0');
		return (0);
	}
}
