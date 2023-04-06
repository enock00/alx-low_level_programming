#include "main.h"

/**
 *set_bit - a function that sets the value of a bit to 1
 *
 *@n: The value of a bit
 *
 * Return: always 0
 */
int set_bit(unsigned long int *n, unsigned int index)
{
	 if (index >= sizeof(unsigned long int) * 8)
	 {
		 return -1;
	 }
	 *n |= 1UL << index;
	 return 1;
}
