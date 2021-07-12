/**
 * _isupper  - Short description, single line
 * @c: contians value to be compared
 * Return: value of isupper
 */

int __isupper(int c)
{
	int isupper = 0;
	char ch  = c;

	if (ch > 64 && ch <= 90)
	{
		isupper = 1;
	}

	else
	{
		isupper = 0;
	}

	return (isupper);
}
