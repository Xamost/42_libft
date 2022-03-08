#include <stdlib.h>

void *fr_memset(void *pointer, int value, size_t count)
{   
    int i;
    (int *) pointer;
    pointer = (int *) malloc(count);

    i = 0;
    while(pointer[i] != '\0')
    {
        pointer[i] = value;
        i++;
    }
    return (pointer);
}