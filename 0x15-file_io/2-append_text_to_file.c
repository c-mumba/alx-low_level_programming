#include "main.h"

/**
 * append_text_to_file - append to a file
 * @filename: filename
 * @text_content: text content
 * Description: function that appends text at the end of a file
 * Return: 1 or -1
 */

int append_text_to_file(const char *filename, char *text_content)
{
	int counter = 0, f;

	if (filename == NULL)
		return (-1);
	if (text_content == NULL)
		text_content = "";
	while (text_content[counter] != '\0')
	{
		counter++;
	}

	f = open(filename, O_WRONLY | O_APPEND);
	if (f == -1)
		return (-1);
	write(f, text_content, counter);
	return (1);
}
