#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <fcntl.h>
#include <unistd.h>
#include <errno.h>

#define BUF_SIZE 1024

/**
 * handleError - ....
 * @error: ....
 * @file:...
 */

void handleError(int error, const char *file)
{
switch (error)
{
case 97:
dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
exit(97);
case 98:
dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", file);
exit(98);
case 99:
dprintf(STDERR_FILENO, "Error: Can't write to %s\n", file);
exit(99);
case 100:
dprintf(STDERR_FILENO, "Error: Can't close fd %s\n", file);
exit(100);
}
}


/**
 * main - ...
 * @argc: The argument count
 * @argv: The argument vector
 *Return: ...
 */

int main(int argc, char **argv)
{
int fd_from, fd_to, num_read, num_written;
char buf[BUF_SIZE];

if (argc != 3)
{
handleError(97, NULL);
}

fd_from = open(argv[1], O_RDONLY);
if (fd_from == -1)
{
handleError(98, argv[1]);
}

fd_to = open(argv[2], O_WRONLY | O_CREAT | O_TRUNC, 0644);
if (fd_to == -1)
{
handleError(99, argv[2]);
}

while ((num_read = read(fd_from, buf, BUF_SIZE)) > 0)
{
num_written = write(fd_to, buf, num_read);
if (num_written != num_read)
{
handleError(99, argv[2]);
}
}

if (num_read == -1)
{
handleError(98, argv[1]);
}

if (close(fd_from) == -1)
{
handleError(100, argv[1]);
}
if (close(fd_to) == -1)
{
handleError(100, argv[2]);
}

return (0);
}

