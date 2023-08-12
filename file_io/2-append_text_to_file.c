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
int o_f, r_f, w_f;

if (filename == NULL)
	return (-1);

o_f = open(filename, O_WRONLY | O_APPEND);
if (o_f == -1)
{
	return (-1);
}

	if (text_content == NULL)
		text_content = "";
	{
		for (r_f = 0; text_content[r_f] != '\0';)
			r_f++;
	}

w_f = write(o_f, text_content, r_f);
if (w_f == -1)
	return (-1);

close(o_f);
return (1);
}
