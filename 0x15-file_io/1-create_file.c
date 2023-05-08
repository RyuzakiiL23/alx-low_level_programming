#include "main.h"

/**
 * create_file - creates a new file and writes text content to it
 * @filename: name of the file to create
 * @text_content: content to write to the file
 *
 * Return: 1 on success, -1 on failure
 */
int create_file(const char *filename, char *text_content)
{
		int file_desc, n_letters, result;

		if (!filename)
		return (-1);

		file_desc = open(filename, O_CREAT | O_WRONLY | O_TRUNC, S_IRUSR | S_IWUSR);

		if (file_desc == -1)
		return (-1);

		if (!text_content)
		text_content = "";

		for (n_letters = 0; text_content[n_letters]; n_letters++)
		;

		result = write(file_desc, text_content, n_letters);

		if (result == -1)
		return (-1);

		close(file_desc);

		return (1);
}
