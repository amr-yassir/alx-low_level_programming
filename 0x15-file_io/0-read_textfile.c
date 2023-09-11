#include "main.h"

/***/

ssize_t read_textfile(const char *filename, size_t letters)
{
    FILE *file;
    char text[letters];

    file = fopen(filename, "r");
    if (!file || !filename)
        return (0);

    while (fgets(file, letters, text))
        printf("%s", text);

    return (strlen(text));
}