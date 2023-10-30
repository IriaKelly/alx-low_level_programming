#include <stdio.h>
#include "main.h"

/**
 * read_textfile - reads a text file and prints it to the POSIX standard output.
 * @filename: pointer to the filename
 * @letters: number of letters
 * Return: the actual number of letters it could read and print
 */
ssize_t read_textfile(const char *filename, size_t letters) {
    FILE *file = fopen(filename, "r");

    if (file == NULL) {
        printf("Oops! Something went wrong while opening the file.\n");
        return 0;
    }

    char buffer[letters];
    ssize_t read_letters = fread(buffer, 1, letters, file);
    buffer[read_letters] = '\0';

    for (ssize_t i = 0; i < read_letters; i++) {
        _putchar(buffer[i]);
    }

    fclose(file);

    return read_letters;
}

