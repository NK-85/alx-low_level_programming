#include "main.h"
#include <stdio.h>

/**
 * get_bit - a function that returns the value of a bit at a given index
 *
 * @n: checking bits
 *
 * @index: which to check bit
 *
 * Return: the value of the bit at index index or -1 if an error occured
 */
int get_bit(unsigned long int n, unsigned int index)
{
	unsigned long int dev, res;

	if (index > (sizeof(unsigned long int) * 8 - 1))
		return (-1);
	dev = 1 << index;
	res = n & dev;
	if (res == dev)
		return (1);

	return (0);
}
