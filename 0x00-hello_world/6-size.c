#include <stdio.h>
/**
 *main- prints sizeof
 *Return: signifies no errors
 */
int main(void)
{
	char c = 'a';
	int i = 2;
	long int li = 2;
	long long int lli = 2;
	float f = 2.0;

	printf("Size of a char: %lu\n",(unsigned long)sizeof(&c));
	printf("Size of an int: %lu\n",(unsigned long)sizeof(&i));
	printf("Size of a long int: %lu\n",(unsigned long)sizeof(&li));
	printf("Size of a long long int: %lu\n",(unsigned long)sizeof(&lli));
	printf("Size of a float: %lu\n",(unsigned long)sizeof(&f));
	return (0);
}
