#include "main.h"

/**
 * append_text_to_file - appends text at the end of a file
 * @filename: name of the file to append
 * @text_content: NULL terminated string to add at the end of the file
 * Return: If the function fails or filename is NULL  -1
 *         If the file does not exist the user lacks write permissions  -1
 *         Otherwise 1
 */

int append_text_to_file(const char *filename, char *text_content)
{
	int file_descriptor, written, text_length = 0;

	if (filename == NULL)
		return (-1);

	if (text_content != NULL)
	{
		for (text_length = 0; text_content[text_length];)
			text_length++;
	}

	file_descriptor = open(filename, O_WRONLY | O_APPEND);
	written = write(file_descriptor, text_content, text_length);

	if (file_descriptor == -1 || written == -1)
		return (-1);

	close(file_descriptor);

	return (1);
}
