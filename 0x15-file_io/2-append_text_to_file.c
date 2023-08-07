#include "main.h"

/**
  * append_text_to_file - appends text to end of file
  * @filename: name of the file
  * @text_content: text that needs to be appended to file
  * Return: if file exists 1,-1 if file fails or doesnt exist
  */

int append_text_to_file(const char *filename, char *text_content)
{
	/*file descriptor*/
	int fd;
	/*num of letters in text_content*/
	int nletters;
	/*return value of the write operation*/
	int rwr;

	if (!filename)
		return (-1);

	/*specifying how file is opened*/
	fd = open(filename, O_WRONLY | O_APPEND);

	if (fd == -1)
		return (-1);

	if (text_content)
	{
		/*count no of letters in text_content*/
		for (nletters = 0; text_content[nletters]; nletters++)
			;
		rwr = write(fd, text_content, nletters);

		if (rwr == -1)
			return (-1);
	}
	/*close file*/
	close(fd);

	return (1);
}

