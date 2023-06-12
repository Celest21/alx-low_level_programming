#include "main.h"

/**
  * create_file - creates a file and adds text content to it
  * @filename: pointer to name the file being created
  * @text_content: pointer to a string to write to file
  *
  * Return: 1 on success, or -1 if it fails
  */

int create_file(const char *filename, char *text_content)
{
	/*variables for file operations*/
	int fd, len, w = 0;

	/*return -1 if filename is NULL*/
	if (filename == NULL)
		return (-1);

	if (text_content != NULL)
	{
		for (len = 0; text_content[len];)
			/*calculate the lenght of the content*/
			len++;
	}

	/*open the file with create, read or write and truncate flags*/
	fd = open(filename, O_CREAT | O_RDWR | O_TRUNC, 0600);

	/*write text to the file*/
	w = write(fd, text_content, len);

	/*check if opening or writing to file failed*/
	if (fd == -1 || w == -1)
		/* if error return -1*/
		return (-1);

	/*close file*/
	close(fd);

	/*if successful retun 1*/
	return (1);
}

