#include "main.h"
/**
 * flip_bits - function that returns the number
 * of bits you would need to flip to get from one number to another
 * @n: number 1
 * @m: number 2
 * Return:  number of bits you would need to flip to get from number 1
 * to number 2
 */

unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int flip = n ^ m;
	unsigned int count = 0;

	while (flip > 0)
	{
		count++;
		flip &= (flip - 1);
	}
	return (count);
}
