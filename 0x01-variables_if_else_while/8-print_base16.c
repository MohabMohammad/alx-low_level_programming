#include <stdio.h>
/**
 *main-prints lowercase digits of base 16
 *Return: 0 signifies no error
 */
int main(void)
{
	int a = 0;
	char b = 'a';

	while (a <= 9)
	{
		putchar('0' + a);
		a += 1;
	}

	while (b <= 'f')
	{
		putchar(b);
		b += 1;
	}

	putchar('\n');

	return (0);
}
