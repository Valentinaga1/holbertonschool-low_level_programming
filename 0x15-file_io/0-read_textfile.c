#include "holberton.h"
/**
 * read_textfile - Function that reads a text file and prints it to the POSIX
 * standard output
 * @filename: Pointer to the name of the file
 * @letters: Number of letters it should read and print
 * Return:The actual number of letters it could read and print.
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	int od = 0, rd = 0, wd = 0;
	char *buffer;

	if (filename == NULL)
	return (0);

	buffer = malloc(sizeof(char) * letters);
	if (buffer == NULL)
		return (0);

	od = open(filename,  O_RDONLY);
	if (od == -1)
	{
		free(buffer);
		return (0);
	}

	rd = read(od, buffer, letters);
	if (rd == -1)
	{
		free(buffer);
		return (0);
	}

	wd = write(1, buffer, rd);
	if (wd == -1)
	{
		free(buffer);
		return (0);
	}
	close(od);
	free(buffer);
	return (wd);
}
