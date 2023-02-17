#include <stdio.h>
/**
 *main-prints lowercase letters then uppercase letters
 *Return: 0 signifies a new error
 */
int main(void)
{
	char c = 'a';
	char c2 = 'A';

	while (c <= 'z')
	{
		putchar(c);
		c = c + 1;
	}

	while (c2 <= 'Z')
	{
		putchar(c2);
		c2 =  c2 + 1;
	}

	putchar('\n');

	return (0);
}
