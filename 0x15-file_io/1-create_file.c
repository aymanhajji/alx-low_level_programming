#include "main.h"
/**
 * create_file - creats a file
 * @filename: the file name
 * @text_content: text content that would be in the file
 *
 * Return: integer
 */
int create_file(const char *filename, char *text_content)
{
	int fd, bytes_written;
	mode_t mode;
	int len;

	len = 0;
	mode = S_IRUSR | S_IWUSR;
	if (filename == NULL)
	{
		return (-1);
	}
	fd = open(filename, O_WRONLY | O_CREAT | O_TRUNC, mode);
	if (fd == -1)
	{
		return (-1);
	}
	if (text_content != NULL)
	{
		while (text_content[len] != '\0')
		{
			len++;
		}
		bytes_written = write(fd, text_content, len);
		if (bytes_written == -1)
		{
			close(fd);
			return (-1);
		}
	}
	close(fd);
	return (1);
}
