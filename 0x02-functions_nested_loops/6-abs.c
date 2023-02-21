/**
 *_abs- returns absolute value of number
 *Return: absolute value
 *@n: number to be processed
 */
int _abs(int n)
{
	int abs = n;

	if (n < 0)
	{
		 abs = n * -1;
	}

	return (abs);
}
