#include "main.h"

/**
 * reverse_array - desciption
 * @a: the array to reverse
 * @n: number of elements to reverse.
 */
void reverse_array(int *a, int n)
{
	int temp;
	int x;

	n--;
	for (x = 0;  x < n ; x++)
	{
		temp = a[x];
		a[x] = a[n];
		a[n] = temp;
		n--;
	}
}

