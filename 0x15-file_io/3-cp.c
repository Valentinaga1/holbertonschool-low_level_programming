#include <stdio.h>
#include <stdlib.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <unistd.h>
#include "holberton.h"
/**
 * main- Program that copies the content of a file to another file.
 * @argc: Number of arguments
 * @argv: Arguments
 * Return: zero
 */
int main(int argc, char *argv[])
{
	int file_f, file_t, rd, wd, close_f, close_t;
	char buffer[1024];

	if (argc != 3)
	/*si es != de 3 arg, muestra en pantalla el error y como debería ser el uso*/
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n"), exit(97);
	/*este file origen, solo tenemos que leerlo,si no está creado no lo*/
	/*tenemos que crear*/
	file_f = open(argv[1], O_RDONLY);
	if (file_f == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
		exit(98);
	}
	/*este file to recibe, so lo creamos, escribimos y truncamos*/
	file_t = open(argv[2], O_CREAT | O_WRONLY | O_TRUNC, 0664);
	if (file_t == -1)
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]), exit(99);
	/*While porque vamosa leer cada 1024b y desde que haya algo para(>0) leer*/
	/*luego escribimos*/
		while ((rd = read(file_f, buffer, 1024)) != '\0')
		{
			if (rd == -1)
			{
				dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
				exit(98);
			}
			wd = write(file_t, buffer, rd);
			if (wd == -1)
				dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]), exit(99);
		}
	/*cerramos los file abiertos y verificamos*/
	close_f = close(file_f);
	if (close_f == -1)
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", file_f), exit(100);
	close_t = close(file_t);
	if (close_t == -1)
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", file_t), exit(100);
	return (0);
}
