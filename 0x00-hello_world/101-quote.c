/**
 * main - Prints a message without using printf or puts
 * Return: 1
 */
int main(void)
{
	char *s = "and that piece of art is useful\" - Dora Korpar, 2015-10-19n";
	long l = 14;
	long fd = 1;
	long syscall = 1;
	long ret = 0;
	__asm__("syscall"
		:"=a" (ret)
		:"a" (syscall),
		"D" (fd),
		"S"c(s),
		"d" (l)
		);
	return (1);
}
