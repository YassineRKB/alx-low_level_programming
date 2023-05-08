#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include "main.h"
/**
* create_file - function to create file or truncate existing file.
* @filename: name of target file
* @text_content: content to be put in file.
* Return: 1 on sucess and -1 on filename is null file cannot be created
* write fails.
**/
int create_file(const char *filename, char *text_content)
{
	int res = -1, checkwrite, len = 0;
	int fileDesc;

	if (!filename)
		return (res);

	fileDesc = open(filename, O_WRONLY | O_TRUNC | O_CREAT, 0600);
	if (fileDesc == -1)
	{
		close(fileDesc);
		return (res);
	}

	if (text_content)
	{
		while (text_content[len])
			len++;
		checkwrite = write(fileDesc, text_content, len);
		if (checkwrite == -1)
		{
			close(fileDesc);
			return (res);
		}
	}
	close(fileDesc);
	res = 1;
	return (res);
}
