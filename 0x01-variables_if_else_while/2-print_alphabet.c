#include <stdio.h>
/**
 *main- prints characters from a to z
 *Return: 0 signifies no error
 */
int main(void)
{
	char c = 'a';

	while (c <= 'z')
	{
		putchar(c);
		putchar('\n');
		c = c + 1;
	}
}
