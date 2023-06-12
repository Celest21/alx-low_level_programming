#include "main.h"
#include <stdlib.h>

/**
  * read_textfile - read the file and print to stdout
  * @filename: the text file that is being read
  * @letters: no of letters to be read
  * Return: the no of bytes read and printed
  * 0 when file name is NULL or function fails
  */

ssize_t read_textfile(const char *filename, size_t letters)
{
	/*no of bytes written in stdout*/
	ssize_t w;
	/*no of bytes read from file*/
	ssize_t t;
	/*file descriptor*/
	ssize_t fd;
	/*buffer stores read text*/
	char *buf;

	/*open file in read only mode*/
	fd = open(filename, O_RDONLY);
	if (fd == -1)
		/*if file cant open return 0*/
		return (0);

	/*memory allocation for buffer based on no of letters to be read*/
	buf = malloc(sizeof(char) * letters);
	/*read no of letters from file into buffer*/
	t = read(fd, buf, letters);
	/*write contents of buffer to stdout*/
	w = write(STDOUT_FILENO, buf, t);
	/*free allocated memory for the buffer*/
	free(buf);
	/*close file*/
	close(fd);

	/*return no of bytes thats written to STDOUT*/
	return (w);
}

