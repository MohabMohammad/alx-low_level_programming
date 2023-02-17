#include <stdio.h>
/**
 *main-prints lowercase characters in reverse
 *Return: 0 signifies no error
 */
int main(void)
{
	int a = 'z';

	while (a >= 'a')
	{
		putchar(a);
		a -= 1;
	}
	putchar('\n');

	return (0);
}
