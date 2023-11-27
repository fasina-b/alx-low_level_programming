#include "main.h"

/**
 * create_file - Creates a file and writes text content to it
 * @filename: Name of the file to create
 * @text_content: The NULL-terminated string
 *
 * Return: 1 on success, -1 on failure
 */
int create_file(const char *filename, char *text_content)
{
int fildes;
int wstat;
int cstat;

size_t txt = 0;

if (filename == NULL)
	return (-1); /* Returns zero if fillename is null */

/* Calculate the length of text_content if it is not NULL */
if (text_content != NULL)
	while (text_content[txt] != '\0')
		txt++;

/* Open the file with write-only access*/
fildes = open(filename, O_WRONLY | O_CREAT | O_TRUNC, 0600);
if (fildes == -1)
	return (-1); /* Create if it does not exists, truncate if it exists */

/* Write text_content to the file if it is not NULL */
if (txt > 0)
{
wstat = write(fildes, text_content, txt);
if (wstat == -1)
{
cstat = close(fildes);
return (-1);
}
}

cstat = close(fildes);
if (cstat == -1)
	return (-1); /* Close the file descriptor */

return (1);
}
