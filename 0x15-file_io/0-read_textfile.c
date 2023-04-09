#include "main.h"
#include <stdlib.h>

/**
  * read_textfile - Read text file print to STDOUT
  * @filename: The source file
  * @letters: Number of letters to reads and prints
  *
  * Return: 0 when function fails
  */
ssize_t read_textfile(const char *filename, size_t letters)
{
	ssize_t x;
	ssize_t y;
	ssize_t z;
	char *buffer;

	x = open(filename, O_RDONLY);
	if (x == -1)
		return (0);
	buffer = malloc(sizeof(char) * letters);
	z = read(x, buffer, letters);
	y = write(STDOUT_FILENO, buffer, z);

	free(buffer);
	close(x);
	return (y);
}
