#include "holberton.h"
/**
 * create_file - Function that creates a file.
 * @filename: Name of the file to create
 * @text_content:Is a NULL terminated string to write to the file
 * Return:1 on success, -1 on failure.
 */
int create_file(const char *filename, char *text_content)
{
	int  fd = 0, wd = 0, letters = 0;

	if (filename == NULL)
		return (-1);
	/*abro el archivo y lo creo*/
	/*permisson: rw------- o sea 0600.*/
	/* TRUNCATE if the file alreadyexists*/
	fd = open(filename, O_CREAT | O_WRONLY | O_TRUNC, 0600);
	if (fd == -1)
		return (-1);
	if (text_content == NULL)
		return (1);/*crea el archivo si no existe*/
	while (text_content[letters])
		letters++;
	/*con la long del string, lo escribo*/
	wd = write(fd, text_content, letters);
	if (wd == -1)
		return (-1);
	close(wd);
	/*returns 1 if succes*/
	return (1);
}
