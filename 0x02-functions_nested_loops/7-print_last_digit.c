#include "main.h"
/**
 *print_last_digit- prints last digit of number
 *Return: 0 signifies no error
 *@n: number to get last digit from
 */
int print_last_digit(int n)
{
	int last = n % 10;

	_putchar('0' + last);

	return (0);
}
