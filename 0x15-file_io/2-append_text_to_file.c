#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include "main.h"
/**
* append_text_to_file - appends text to existing file.
* @filename: name of target file
* @text_content: content to append in file.
* Return: 1 on sucess and -1 on filename is null file does not exist
* write fails due to permissions.
**/
int append_text_to_file(const char *filename, char *text_content)
{
	int res = -1, checkwrite, len = 0;
	int fileDesc;

	if (!filename)
		return (res);

	fileDesc = open(filename, O_WRONLY | O_APPEND);
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
