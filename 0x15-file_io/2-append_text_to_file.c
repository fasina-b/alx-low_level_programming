#include "main.h"

/**
 * append_text_to_file - Appends text at the end of a file.
 * @filename: Name of the file.
 * @text_content: The NULL-terminated string added at end of file.
 *
 * Return: 1 on success, -1 on failure.
 */
int append_text_to_file(const char *filename, char *text_content)
{
int fildes;
int txt;
int wbytes;

if (filename == NULL)
	return (-1);

    /* Open the file for writing */
fildes = open(filename, O_WRONLY | O_APPEND | O_CREAT, 0600);
if (fildes == -1)
	return (-1); /* Creating it if it doesn't exist */

if (text_content != NULL)
{
/* Calculate the length of the text_content */
for (txt = 0; text_content[txt] != '\0'; txt++)
{
}

/* Write the text_content to the end of the file */
wbytes = write(fildes, text_content, txt);

/* Check for write errors */
if (wbytes == -1)
{
close(fildes);
return (-1);
}
}

/* Close the file */
if (close(fildes) == -1)
	return (-1);

return (1);
}
