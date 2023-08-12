#include "main.h"

/**
 * append_text_to_file - add content to end of file.
 * @filename: name of file.
 * @text_content: content of file.
 *
 * Return: Appended file.
 */

int append_text_to_file(const char *filename, char *text_content)
{
int fd, count, prt;

if (filename == NULL)
	return (-1);

fd = open(filename, O_WRONLY, O_APPEND);
if (fd == -1)
{
	return (-1);
}

	if (text_content)
	{
		for (count = 0; *(text_content + count);)
			count++;
	}

	prt = write(fd, text_content, count);
	if (prt == -1)
		return (-1);

close(fd);
return (1);
}
