/**
 * set_string - set the value of a pointer to  a char
 * @s: the pointer to set
 * @to: the char to assign
 *
 * Description: sets the pointer pointed to
 * by s to the value pointed to by to
 */
void set_string(char **s, char *to)
{
	*s = to;
}
