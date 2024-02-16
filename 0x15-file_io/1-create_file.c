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
	int len;
	char *buffer;

	len = 0;
	if (text_content == NULL)
	{
		fd = open(filename, O_RDONLY);
		return (1);
	}
	while (text_content[len] != '\0')
	{
		len++;
	}
	fd = open(filename, O_WRONLY | O_CREAT | O_TRUNC, 0600);
	buffer = malloc(sizeof(char *) * (len + 1));
	if (buffer == NULL)
	{
		close(fd);
		return (-1);
	}
	if (fd == -1)
	{
		free(buffer);
		close(fd);
		return (-1);
	}
	if (filename == NULL)
	{
		free(buffer);
		close(fd);
		return (-1);
	}
	bytes_written = write(fd, buffer, len);
	if (bytes_written == -1 || bytes_written != len)
	{
		free(buffer);
		close(fd);
		return (-1);
	}
	free(buffer);
	close(fd);
	return (1);
}
