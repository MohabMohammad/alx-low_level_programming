/**
 *_isalpha- checks whether letter is alphabetic
 *Return: 1 if alphabetic, 0 otherwise
 *@c: letter to be checked
 */
int _isalpha(int c)
{
	if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
		return (1);

	return(0);
}
