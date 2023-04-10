#include <stdio.h>
#include "main.h"

/**
 * _power - number to calculate (base and power)
 *
 * @base: base number of the exponet
 * 
 * @pow: power number of the exponet
 * 
 * Return: value/number of base and power
 */
unsigned long int _power(unsigned int base, unsigned int pow)
{
	unsigned long int numb;
	unsigned int a;

	numb = 1;
	for (a = 1; a<= pow; a++)
		numb *= base;
	return (numb);
}
/**
 * print_binary - prints the binary representation of a number
 * @n: num of prented
 * Return: void
 */
void print_binary(unsigned long int n)
{
	unsigned long int mask, result;
	char flag;

	flag = 0;
	mask = _power(2, sizeof(unsigned long int) * 8 - 1);

	while (mask != 0)
	{
		result = n & mask;
		if (result == mask)
		{
			flag = 1;
			_putchar('1');

		}
		else if (flag == 1 || mask == 1)
		{
			_putchar('0');
		}
		mask >>= 1;
	}

}
