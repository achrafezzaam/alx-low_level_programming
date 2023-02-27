/**
 * swap_int - swap the values of a and b
 * @a: first value to swap
 * @b: second value to swap
 *
 * Description: take two pointers as parameters
 * and swaps the values pointed by them
 */
void swap_int(int *a, int *b)
{
	int temp;

	temp = *a;
	*a = *b;
	*b = temp;
}
