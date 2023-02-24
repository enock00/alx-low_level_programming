#include <stdio.h>
/**
 * main - The “Fizz-Buzz test”
 *
 * Return: 0
 */
int main(void)
{
	int f;


	printf("1");
	for (f = 2; f <= 100; f++)
	{
		printf(" ");
		if (f % 3 == 0)
			printf("Fizz");
		if (f % 5 == 0)
			printf("Buzz");
		if (f % 3 != 0 && f % 5 != 0)
			printf("%d", f);
	}
	printf("\n");
	return (0);
}
