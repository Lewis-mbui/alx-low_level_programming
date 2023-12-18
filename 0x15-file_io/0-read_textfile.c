#include "main.h"
#include <stdlib.h>

/**
 * read_textfile - reads a text file and prints it to the STDOUT
 * @filename: name of the file
 * @letters: number of letters to be read and printed
 * Return:  actual number of letters it could read and print
 * or 0 if file cannot be opened or read or filename is NULL.
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
	char *buffer;
	ssize_t written;
	ssize_t totalRead;
	ssize_t file_descriptor;

	file_descriptor = open(filename, O_RDONLY);
	if (file_descriptor == -1)
	{
		return (0);
	}
	buffer = malloc(sizeof(char) * letters);
	totalRead = read(file_descriptor, buffer, letters);
	written = write(STDOUT_FILENO, buffer, totalRead);

	free(buffer);
	close(file_descriptor);
	return (written);
}
