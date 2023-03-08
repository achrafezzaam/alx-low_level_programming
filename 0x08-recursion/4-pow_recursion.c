/**
 * _pow_recursion - Gives the power of a number
 * @x: the number to give the power of
 * @y: the number used as power
 *
 * Description: gives the value of x power y
 * by making recursive calls.
 * Return: return -1 if y is lower than 0,
 * or the result of x power y.
 */
int _pow_recursion(int x, int y)
{
	int r = x;

	if (y < 0)
		return (-1);
	else if (y == 0)
		return (1);
	r *= _pow_recursion(x, y - 1);
	return (r);
}
