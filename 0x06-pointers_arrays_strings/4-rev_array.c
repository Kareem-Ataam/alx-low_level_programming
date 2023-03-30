/**
 * reverse_array - reverse an array of intgers
 * @a: Pointer to the first element of the array
 * @n: Size of the array
 */
void reverse_array(int *a, int n)
{
	int i, j, temp;

	for (i = 0, j = n - 1; i < j; i++, j--)
	{
		temp = a[i];
		a[i] = a[j];
		a[j] = temp;
	}
}
