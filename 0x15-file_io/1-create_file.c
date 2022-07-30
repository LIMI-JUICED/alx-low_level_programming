#include "main.h"

/**
 * dreate_file - creates a file
 * @filename: Pointer to the name of the file to create
 * @text_content: Pointer to a string to write to the list
 *
 * Return: 1 on success, function fails -1.
 */

int create_file(const char *filename, char *text_content)
{
	int fd, x, y = 0;

	if (!filename)
		return (-1);

	fd = open(filename, O_CREAT | O_RDWR | O_TRUNC, 0600);
	if (fd < 0)
		return (-1);

	if (text_content)
	{
		while (text_content[y])
			y++;
		x = write(fd, text_content, y);
		if (x != y)
			return (-1);
	}

	close(fd);

	return (1);
}
