#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include "main.h"

#define CP_ERR_ARGS "Usage: cp file_from file_to\n"
#define CP_ERR_READ "Error: Can't read from file %s\n"
#define CP_ERR_WRITE "Error: Can't write to %s\n"
#define CP_ERR_CLOSE "Error: Can't close fd %d\n"
/**
* main - entry code, to copy file content to another
* @argc: arguments counter
* @argv: arguments value
* Return: on error:97 98 99 100 , on success 0.
**/
int main(int argc, char **argv)
{
	char buffer[1024];
	int fileDesc_to, fileDesc_from;
	int checkWrite, checkRead, checkClose;
	int keepReading = 1;

	if (argc != 3)
		dprintf(STDERR_FILENO, CP_ERR_ARGS), exit(97);

	fileDesc_from = open(argv[1], O_RDONLY);
	if (fileDesc_from == -1)
		dprintf(STDERR_FILENO, CP_ERR_READ, argv[1]), exit(98);

	fileDesc_to = open(argv[2], O_WRONLY | O_TRUNC | O_CREAT, 0664);
	if (fileDesc_to == -1)
		dprintf(STDERR_FILENO, CP_ERR_WRITE, argv[2]), exit(99);

	while (keepReading == 1)
	{
		checkRead = read(fileDesc_from, buffer, 1024);
		if (checkRead == -1)
			dprintf(STDERR_FILENO, CP_ERR_READ, argv[1]), exit(98);
		if (checkRead > 0)
		{
			checkWrite = write(fileDesc_to, buffer, checkRead);
			if (checkWrite == -1)
				dprintf(STDERR_FILENO, CP_ERR_WRITE, argv[2]), exit(99);
		}
		else
			keepReading = 0;
	}
	checkClose = close(fileDesc_from);
	if (checkClose == -1)
		dprintf(STDERR_FILENO, CP_ERR_CLOSE, fileDesc_from), exit(100);

	checkClose = close(fileDesc_to);
	if (checkClose == -1)
		dprintf(STDERR_FILENO, CP_ERR_CLOSE, fileDesc_to), exit(100);
	return (0);
}
