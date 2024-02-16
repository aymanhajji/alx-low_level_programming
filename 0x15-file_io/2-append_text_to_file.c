#include "main.h"
/**
 * append_text_to_file - appends text at the end of a file
 * @filename:  file name
 * @text_content: text to be append
 *
 * Return: 1 on success and -1 on failure
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int fd, bytes_written, len;
	mode_t mode;

	len = 0;
	mode = S_IRUSR | S_IWUSR;
	if (filename == NULL)
	{
		return (-1);
	}
	fd = open(filename, O_WRONLY | O_APPEND, mode);
	if (fd == -1)
	{
		return (-1);
	}
	if (text_content == NULL)
	{
		if (fd == 1)
		{
			return (1);
		}
		else if (fd == -1)
		{
			return (-1);
		}
	}
	else if (text_content != NULL)
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
