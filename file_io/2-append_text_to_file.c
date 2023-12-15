#include "main.h"
#include <string.h>
#include <fcntl.h>
#include <unistd.h>
#include <stdlib.h>

/**
 * append_text_to_file - appends text at the end of a file
 * @filename: the name of the file
 * @text_content: the NULL terminated string to add at the end of the file
 * Return: 1 on success and -1 on failure
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int fd, res_write;

	if (filename == NULL)
		return (-1);

	/* Open the file with read-write permissions,*/
	/* creating it if it doesn't exist */
	fd = open(filename, O_WRONLY | O_APPEND);
	if (fd == -1)
		return (-1);

	if (text_content != NULL)
	{
		/* Write to the file */
		res_write = write(fd, text_content, strlen(text_content));
		if (res_write == -1)
		{
			close(fd);
			return (-1);
		}
	}

	/* Clean up and close the file */
	close(fd);

	return (1);
}
