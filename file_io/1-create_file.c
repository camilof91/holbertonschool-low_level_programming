#include "main.h"
#include <fcntl.h>
#include <string.h>
#include <unistd.h>
#include <stdlib.h>
#include <stdio.h>

/**
 * create_file - creates a file
 * @filename: the name of the file to create
 * @text_content: a NULL terminated string to write to the file
 * Return: 1 on success, -1 on failure
 */
int create_file(const char *filename, char *text_content)
{
	int fd, res_write;
	mode_t mode = S_IRUSR | S_IWUSR; /* rw------- */

	if (filename == NULL)
		return (-1);

	/* Open the file with read-write permissions, creating it if*/
	/* it doesn't exist */
	fd = open(filename, O_WRONLY | O_CREAT | O_TRUNC, mode);
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
