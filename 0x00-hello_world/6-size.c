#include <stdio.h>
/**
 * main - Entry
 * Return: Always 0
 */
int main(void)
{
printf("Size of a char: %i byte(s)\n",(unsigned long)sizeof(char));
printf("Size of an int: %i byte(s)\n",(unsigned long)sizeof(int));
printf("Size of a long int: %i byte(s)\n",(unsigned long)sizeof(long int));
printf("Size of a long long int: %i byte(s)\n",(unsigned long)sizeof(long long int));
printf("Size of a flost: %i byte(s)\n",(unsigned long) sizeof(float));
return (0);
}
