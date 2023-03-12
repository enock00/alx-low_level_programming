#include "main.h"

/**
  * _strncat - Concatenates two strings
  * @dest: The destination value
  * @src: The source value
  * @n: The limit of the concatenation
  *
  * Return: A pointer to the resulting string dest
  */
char *_strncat(char *dest, char *src, int n)
{
        int dest_len = 0, j = 0;

        while (dest[dest_len])
        {
                dest_len++;
        }

        while (j < n && src[j])
        {
                dest[dest_len] = src[j];
                dest_len++;
                j++;
        }

        dest[dest_len + n + 1] = '\0';

        return (dest);
}
