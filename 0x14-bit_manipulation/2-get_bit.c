/**
 * get_bit - Returns the value of a bit at a given index
 *
 * @n: number to search bit in
 * @index: index of the bit to return
 *
 * Return: Value of bit at given index or -1 if an error occured
 */
int get_bit(unsigned long int n, unsigned int index)
{
	if (index >= (sizeof(unsigned long int) * 8))
		return (-1);

	return ((n >> index) & 1);
}
