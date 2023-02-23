/**
 *_isupper- checks whether character is uppercase
 *Return: 1 if uppercase, 0 otherwise
 *@c: character to be checked
 */
int _isupper(int c)
{
	if (c >= 'A' && c <= 'Z')
		return (1);
	return (0);
}
