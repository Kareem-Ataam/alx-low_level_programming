/**
 * swap_int - swap two variables
 * @a: Pointer to the first variable
 * @b: Pointer to the second variable
 */
void swap_int(int *a, int *b)
{
	int temp = *a;
	*a = *b;
	*b = temp;
}
