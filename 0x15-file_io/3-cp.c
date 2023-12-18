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

/**
 * closeFile - closes files
 * @fileDescriptor: file to be closed
 */

void closeFile(int fileDescriptor)
{
	int result;

	result = close(fileDescriptor);

	if (result == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close"
				"file descriptor %d\n", fileDescriptor);
		exit(100);
	}
}

/**
 * main - copies contents of a file to another file
 * @argc: number of arguments
 * @argv: array of the arguments supplied
 * Return: 0 (success)
 */

int main(int argc, char *argv[])
{
	int sourceFile, destinationFile, bytesRead, bytesWritten;
	char *buffer;

	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp source_file destination_file\n");
		exit(97);
	}
	buffer = allocateBuffer(argv[2]);
	sourceFile = open(argv[1], O_RDONLY);
	bytesRead = read(sourceFile, buffer, 1024);
	destinationFile = open(argv[2], O_CREAT | O_WRONLY | O_TRUNC, 0664);

	do {
		if (sourceFile == -1 || bytesRead == -1)
		{
			dprintf(STDERR_FILENO,
					"Error: Can't read from file %s\n", argv[1]);
			free(buffer);
			exit(98);
		}

		bytesWritten = write(destinationFile, buffer, bytesRead);
		if (destinationFile == -1 || bytesWritten == -1)
		{
			dprintf(STDERR_FILENO,
					"Error: Can't write to %s\n", argv[2]);
			free(buffer);
			exit(99);
		}

		bytesRead = read(sourceFile, buffer, 1024);
		destinationFile = open(argv[2], O_WRONLY | O_APPEND);

	} while (bytesRead > 0);

	free(buffer);
	closeFile(sourceFile);
	closeFile(destinationFile);

	return (0);
}
