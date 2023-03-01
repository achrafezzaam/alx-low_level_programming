/**
 * reverse_array - Reverse n elements of an array
 * @a: the array to reverse
 * @n: the number of elements to reverse
 *
 * Description: reverse_array takes the first n characters
 * and swaps them.
 */
void reverse_array(int *a, int n)
{
	int i, temp;

	for (i = 0; i < n / 2; i++)
	{
		temp = a[i];
		a[i] = a[n - i - 1];
		a[n - i - 1] = temp;
	}
}
