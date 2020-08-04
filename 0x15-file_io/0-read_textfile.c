#include "holberton.h"

#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>

#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>
/**
 * read_textfile - Function that reads a text file and prints it to the POSIX
 * standard output
 * @filename: Pointer to the name of the file
 * @letters: Number of letters it should read and print
 * Return:The actual number of letters it could read and print.
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	int od, rd, wd;
	char *buffer;

	if (filename == NULL)
	return (0);

	buffer = malloc(sizeof(char) * letters);
	if (buffer == NULL)
		return (0);

	od = open(filename,  O_RDONLY);
	if (od == -1)
		return (0);

	rd = read(od, buffer, letters);
	if (rd == -1)
	{
		return (0);
	}
	wd = write(1, buffer, rd);
	if (wd == -1)
	{
		return (0);
	}

	free(buffer);
	close(od);

	return (wd);
}
