#include "main.h"
/**
 *print_line- prints line on screen
 *Return: void
 *@n: number of _ characters to be printed
 */
void print_line(int n)
{
	int i;

	for (i = 0; i < n; i++)
		_putchar('_');
	_putchar('\n');
}
