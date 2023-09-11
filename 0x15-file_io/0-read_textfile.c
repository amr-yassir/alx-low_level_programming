#include "main.h"

/***/

ssize_t read_textfile(const char *filename, size_t letters)
{
    FILE *file;
    char text[letters];

    file = fopen(filename, "r");
    if (!file | !filename)
        return (0);
    if (fgets(file, letters, text))
        printf("%s", text);
    else
        return (0);
    
    return (strlen(text));
}