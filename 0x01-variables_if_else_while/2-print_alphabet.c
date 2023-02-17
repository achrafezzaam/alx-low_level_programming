#include <stdio.h>

int main(void)
{
	int i = 97;
	do {
		putchar(i);
		if (i == 122)
		{
			putchar('\n');
		}
		i++;
	} while (i < 123);
	return (0);
}
