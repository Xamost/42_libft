#include <stdlib.h>
char *ft_strdup(const char* source)
{
    int i;
    char *dest;
    
    i = 0;
    while(source[i] != '\0')
    {
        i++;
    }
    dest = (char *) malloc(i * sizeof(char));
    i = 0;
    while(source[i] != '\0')
    {
        dest[i] = source[i];
        i++;
    }
    dest[i] = '\0';
    return (dest);
}