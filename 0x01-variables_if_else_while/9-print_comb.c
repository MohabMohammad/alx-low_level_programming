#include <stdio.h>
/**
 *main-prints all combinations of single digit numbers
 *Return: 0 signifies no error
 */
int main(void)
{
	int a = 0;

	while (a <= 9)
	{
		putchar(a);
		putchar(',');
		putchar(' ');
		a += 1;
	}

	putchar('\n');

	return (0);
}
