#include "main.h"
#include <stdio.h>
#include <stdlib.h>

char *allocateBuffer(char *targetFile);
void closeFile(int fileDescriptor);

/**
 * allocateBuffer - creates a buffer
 * @targetFile: name of the file buffer is storing chars for
 * Return: a pointer to the created buffer
 */
char *allocateBuffer(char *targetFile)
{
	char *buffer;

	buffer = malloc(sizeof(char) * 1024);

	if (buffer == NULL)
	{
		dprintf(STDERR_FILENO,
				"Error: Can't allocate"
				"memory for %s\n", targetFile);
		exit(99);
	}
	return (buffer);
}
