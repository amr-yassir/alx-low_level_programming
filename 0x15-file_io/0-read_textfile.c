#include "main.h"

/***/

ssize_t read_textfile(const char *filename, size_t letters)
{
    FILE *file;
    char text[letters];
    __ssize_t w;

    if (!filename || !letters)
        return (0);

    file = fopen(filename, "r");
    if (!file)
        return (0);
    else
    {
        while (fgets(text, letters, file))
        {
            w = write(1, &text, 1);
        }
    }
    return(w);
}