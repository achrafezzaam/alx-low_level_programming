/**
 * int_index - Search and return the index of an integer
 * @array: The array to search from
 * @size: The size of the array
 * @cmp: The function used to compare values
 *
 * Description: Uses the function pointed to by cmp
 * to compare the array's elements with a given integer
 * and return it's index
 * Return: Return -1 if no match was found or if the size
 * value is equal or less than 0. Or return the index
 * of the matching array element.
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if (size <= 0)
		return (-1);
	for (i = 0; i < size; i++)
	{
		if (cmp(array[i]) != 0)
			return (i);
	}
	return (-1);
}
