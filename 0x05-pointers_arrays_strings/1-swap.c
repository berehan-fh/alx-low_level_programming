/**
 * swap_int - swaps the values of two integers.
 * @a: first pointer arguement
 * @b: second pointer arguement
 */
void swap_int(int *a, int *b)
{
	int temp = *a;

	*a = *b;
	*b = temp;
}
