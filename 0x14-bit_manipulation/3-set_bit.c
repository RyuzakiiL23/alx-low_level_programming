/**
 * set_bit - Sets the value of a bit at a given index to 1
 * @n: pointer to the number to modify
 * @index: index of the bit to set, starting from 0
 *
 * Return: 1 if it worked, or -1 if an error occurred
 */
int set_bit(unsigned long int *n, unsigned int index)
{
	if (index > (sizeof(unsigned long int) * 8 - 1))
		return (-1);

	*n |= (1 << index);

	return (1);
}
