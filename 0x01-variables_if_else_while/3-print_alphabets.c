#include <stdio.h>

int main(void)
{
        int i = 97;
        do {
                putchar(i);
                i++;
        } while (i < 123);
	i = 65;
	do {
                putchar(i);
                if (i == 90)
                {
                        putchar('\n');
                }
                i++;
        } while (i < 91);
        return (0);
}
