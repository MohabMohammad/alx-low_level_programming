#include <stdio.h>
/**
 *main-prints digits from 0 to 9
 *Return: 0 signifies no error
 */
int main(void)
{
	int a = 0;

	while (a <= 9)
	{
		printf("%d", a);
		a += 1;
	}

	printf("\n");

	return (0);


}
