#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include "main.h"

/**
* read_textfile - function to read text file and print it to posix stdout
* @filename: name of the target file name
* @letters: number of letters to read from the file
* Return: 0 if file name is NULL, file cannot be opened, write file otherwise
* returns the number of actual characters it could read and print
**/
ssize_t read_textfile(const char *filename, size_t letters)
{
	ssize_t actCharNum, checkStdout;
	char *buffer;
	int fileDesc;

	if (!filename)
		return (0);
	buffer = malloc(sizeof(char) * letters);
	if (!buffer)
		return (0);

	fileDesc = open(filename, O_RDONLY);
	if (fileDesc == -1)
	{
		close(fileDesc);
		return (0);
	}

	actCharNum = read(fileDesc, buffer, letters);
	if (actCharNum == -1)
	{
		close(fileDesc), free(buffer);
		return (0);
	}

	checkStdout = write(STDOUT_FILENO, buffer, actCharNum);
	if (checkStdout == -1)
	{
		close(fileDesc), free(buffer);
		return (0);
	}

	close(fileDesc);
	return (actCharNum);
}
