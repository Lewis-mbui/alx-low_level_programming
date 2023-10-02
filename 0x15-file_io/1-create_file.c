#include "main.h"

/**
 * create_file - creates a file
 * @filename: name of the file to create
 * @text_content: string to write into the file
 * Return: If the function fails 1 otherwise - 1
 */

int create_file(const char *filename, char *text_content)
{
	int file_descriptor, written, size = 0;

	if (filename == NULL)
		return (-1);

	if (text_content != NULL)
	{
		for (size = 0; text_content[size];)
			size++;
	}

	file_descriptor = open(filename, O_CREAT | O_RDWR | O_TRUNC, 0600);
	written = write(fd, text_content, len);

	if (file_descriptor == -1 || written == -1)
		return (-1);

	close(file_descriptor);

	return (1);
}
