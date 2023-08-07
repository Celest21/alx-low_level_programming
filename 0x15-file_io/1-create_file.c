#include "main.h"

/**
  * create_file - makes a file
  * @filename: name of file
  * @text_content: content in file
  *
  * Return: 1 if successful and -1 if it fails
  */

int create_file(const char *filename, char *text_content)
{
	/*file descriptor*/
	int fd;
	/*no of letters in text_content*/
	int nletters;
	/*no of bytes*/
	int rwr;


	/*return -1 if filename is NULL*/
	if (!filename)
		return (-1);

	/*specifying how file is created*/
	fd = open(filename, O_CREAT | O_WRONLY | O_TRUNC, 0600);

	/*return -1 if file cant be opened*/
	if (fd == -1)
		return (-1);

	/*if text is NULL set it to a empty string*/
	if (!text_content)
		text_content = "";

	/*count no of letters in text_content*/
	for (nletters = 0; text_content[nletters]; nletters++)
		;

	/*write text_content to file*/
	rwr = write(fd, text_content, nletters);

	/*if there is errors writing return -1*/
	if (rwr == -1)
		return (-1);

	/*close the file*/
	close(fd);

	/*return 1 if successful*/
	return (1);

}

