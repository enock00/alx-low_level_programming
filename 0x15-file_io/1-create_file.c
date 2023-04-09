#include "main.h"
#include <string.h>

/**
 *create_file - Create a function that creates a file
 *@filename: The name of the file
 *@text_content: ..
 *
 *Return: if fails -1,
 *Otherwise 1
 */
int create_file(const char *filename, char *text_content)
{
int fd, n;
if (filename == NULL)
{
return (-1);
}

fd = open(filename, O_WRONLY | O_CREAT | O_TRUNC, 0600);
if (fd == -1)
{
return (-1);
}

if (text_content != NULL)
{
n = write(fd, text_content, strlen(text_content));
if (n == -1)
{
close(fd);
return (-1);
}
}

close(fd);
return (1);
}
