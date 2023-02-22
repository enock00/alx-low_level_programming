#include <stdio.h>
/**
 *main - main Entry
 *
 *Return: always 0
 */
int main(void)
{
	int x;
	int y;

	y = 0;

	for (x = 0 ; x < 1024 ; x++)
	{
		if ((x % 3 == 0) || (x % 5 == 0))

			y = y + x;
	}
	printf("%d\n", y);
	return (0);
}
