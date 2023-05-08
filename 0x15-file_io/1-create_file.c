#include "main.h"

/**
 * create_file - create a file.
 * @filename: filename
 * @text_content: content
 * Description: create a file.
 * Return: 1 or -1 on
 */

int create_file(const char *filename, char *text_content)
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
	f = open(filename, O_CREAT | O_WRONLY | O_TRUNC, 0600);

	if (f == -1)
		return (-1);
	write(f, text_content, counter);
	return (1);
}


