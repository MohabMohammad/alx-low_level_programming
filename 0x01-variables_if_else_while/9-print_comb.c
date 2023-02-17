#include <stdio.h>
/**
 *main-prints all combinations of single digit numbers
 *Return: 0 signifies no error
 */
int main(void)
{
	int a = 0;

	while (a <= 8)
	{
		putchar('0' + a);
		putchar(',');
		putchar(' ');
		a += 1;
	}
	
	putchar('0' + a);

	return (0);
}
