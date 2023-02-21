#include <stdio.h>
/**
 *print_to_98- prints from given number to 98
 *Return: void
 *@n: number to start counting from
 */
void print_to_98(int n)
{
	int i;
	int j;

	printf("%d", n);
	printf(", ");

	if (n > 98)
	{
		for (i = n; i > 98; i--)
		{
			printf("%d", i);
			printf(", ");
		}
		printf("98");
	}
	else if (n < 98)
	{
		for (j = n; j < 98; j++)
		{
			printf("%d", j);
			printf(", ");
		}
		printf("98");
	}
	else
		printf("98");
}
