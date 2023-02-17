#include <stdio.h>
/**
 *main-print digits from 0 to 9
 *Return: 0 signifies no error
 */
int main(void)
{
	int a = 0;
	while (a <= 9)
	{
		putchar((char)(a));
		a+= 1;
	}
	putchar('\n');

	return (0);
}
