#include "main.h"

/**
 * read_textfile - reads and prints to stdout
 * @filename: pointer to the filename
 * @letters: number of letters
 * Return: the actual number of letters it could read and print
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	int file_descriptor;
	ssize_t bytes_read, bytes_written;
	char buffer[1024];

	if (filename == NULL)
		return (0);

	file_descriptor = open(filename, O_RDONLY);
	if (file_descriptor == -1)
		return (0);

	bytes_read = read(file_descriptor, buffer, sizeof(buffer));

	if (bytes_read == -1)
	{
		close(file_descriptor);
		return (0);
	}

	close(file_descriptor);

	bytes_written = write(STDOUT_FILENO, buffer, bytes_read);
	if (bytes_written != bytes_read)
		return (0);
	return (bytes_written);
}
