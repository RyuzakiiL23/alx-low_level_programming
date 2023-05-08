#include "main.h"

/**
 * append_text_to_file - appends text at the end of a file
 * @filename: name of the file.
 * @text_content: content to be appended.
 *
 * Return: 1 if the file exists and the text is appended successfully.
 * -1 if the file doesn't exist or if the appending operation fails.
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int file_descriptor;
	int num_letters;
	int num_written;

	if (!filename)
		return (-1);

	file_descriptor = open(filename, O_WRONLY | O_APPEND);

	if (file_descriptor == -1)
		return (-1);

	if (text_content)
	{
		for (num_letters = 0; text_content[num_letters]; num_letters++)
			;

		num_written = write(file_descriptor, text_content, num_letters);

		if (num_written == -1)
			return (-1);
	}

	close(file_descriptor);

	return (1);
}
