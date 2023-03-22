/**
 * print_name - prints a name
 * @name: The name to print
 * @f: The function that will handle the string printing
 *
 * Description: Use the pointed to function by f
 * ro print the string name.
 */
void print_name(char *name, void (*f)(char *))
{
	f(name);
}
