#include <fcntl.h>
#include <stdlib.h>
#include "main.h"

/**
 * read_textfile - Reads a text file
 * @filename: The name of the file to be read.
 * @letters: The number of letters to read and print.
 *
 * Return: The number of letters read & printed, or 0 on failure.
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
if (filename == NULL)
	return (0); /* Returns zero if fillename is null */

int fildes = open(filename, O_RDONLY);
if (fildes == -1)
	return (0); /* Returns zero if file cant be opened */

char *mem;

mem = malloc(letters);
if (mem == NULL)
{
	close(fildes);
	return (0); /* Returns zero if memory allocation fails */
}

ssize_t rbyte = read(fildes, mem, letters);
if (rbyte == -1)
{
	close(fildes);
	free(mem);
	return (0); /* Returns zero if read fails */
}

ssize_t wbytes = write(STDOUT_FILENO, mem, rbytes);
if (wbyte == -1 || (size_t)wbytes != (size_t)rbytes)
{
	close(fildes);
	free(mem);
	return (0); /* Returns zero if write fails or isnt the expected amount */
}

close(fildes);
free(mem);

return (rbytes);
}
