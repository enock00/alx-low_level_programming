#include "main.h"

/**
 *
 * print binary - prints binary representation of a number
 *
 *@n: The number to printed in binary
 *Return: always 0
 */
void print_binary(unsigned long int n)
{
	unsigned long int mask = 1UL << (sizeof(unsigned long int) * 8 - 1);
	while (mask > 0)
	{
		 putchar((n & mask) ? '1' : '0');
		 mask >>= 1;
	}
}
