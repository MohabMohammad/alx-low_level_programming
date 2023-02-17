#include <stdio.h>
/*
 *main-prints lowercase characters except q & e
 *Return: 0 signifies no error
 */
int main(void)
{
	char c = 'a';

	while (c <= 'z')
	{
		if (c != 'q' && c != 'e')
			putchar(c);
		c += 1;
	}
	putchar('\n');

	return (0);
}
