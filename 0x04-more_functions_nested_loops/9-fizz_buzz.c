#include <stdio.h>
/**
 *main- prints 0-100 with conditions
 *Return: void
 */
int main(void)
{
	for (i = 1; i <= 100; i++)
	{
		if (i % 5 == 0 && i % 3 == 0)
			printf("FizzBuzz");
		else if (i % 3 == 0)
			printf("Fizz");
		else if (i % 5 == 0)
			printf("Buzz");
		else
			printf("%d", i);
	}
	printf("\n");
}