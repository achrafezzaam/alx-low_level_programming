/**
 * puts2 - prints one character and skips one
 * @str: the string to print
 *
 * Description: takes a pointer as parameter
 * then prints the pointed string, by printing
 * one character then skipping the other
 */
void puts2(char *str)
{
	int len = strlen(str);
	int i;

	for (i = 0; i < len; i += 2)
	{
		_putchar(str[i]);
	}
	_putchar(10);
}
