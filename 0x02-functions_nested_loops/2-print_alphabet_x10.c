#include "main.h"
/**
 *print_alphabet_x10- prints 10 times alphabet
 *Return: void
 */
void print_alphabet_x10(void)
{
	int n = 1;

	while (n <= 10)
	{
		char a = 'a';

		while (a <= 'z')
		{
			_putchar(a);
			a++;
		}
		_putchar('\n');
		n++;
	}

}
