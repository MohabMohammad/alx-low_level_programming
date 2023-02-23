/**
 *_isdigit- checks whether parameter is a digit 0-9
 *Return: 1 if digit, 0 otherwise
 *@c: parameter to be checked if digit
 */
int _isdigit(int c)
{
	if (c >= '0' && c <= '9')
		return (1);
	return (0);
}
