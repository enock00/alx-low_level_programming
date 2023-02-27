#include "main.h"

/**
 *_strcpy - unction that copies the string pointed to by src
 *@dest:value destination
 *@src:value source
 *Return: return to dest
 */
char *_strcpy(char *dest, char *src)
{
	int a;

	for (a = 0; src[a] != '\0'; a++)
	{
		dest[a] = src[a];
	}
	dest[a++] = '\0';
	return (dest);
}
