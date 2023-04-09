#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * append_text_to_file - Appends text at the end of a file.
 * @filename: A pointer to the name of the file.
 * @text_content: The string to add to the end of the file.
 *
 * Return: If the function fails or filename is NULL - -1.
 * Otherwise - 1.
 */
int append_text_to_file(const char *filename, char *text_content)
{
	size_t len, written;
	FILE *fp;


	if (filename == NULL || text_content == NULL)
	{
		return (-1);
	}

	fp = fopen(filename, "a");

	if (fp == NULL)
	{
		return (-1);
	}

	len = strlen(text_content);
	written = fwrite(text_content, sizeof(char), len, fp);

	fclose(fp);

	return ((written == len) ? 1 : -1);
}
