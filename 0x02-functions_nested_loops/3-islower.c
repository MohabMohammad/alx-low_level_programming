/**
 *_islower- determines whether character is lowercase
 *Return: 1 if lowercase, 0 if otherwise
 *@c: the letter to be checked
 */
int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
		return (1);

	return (0);
}
