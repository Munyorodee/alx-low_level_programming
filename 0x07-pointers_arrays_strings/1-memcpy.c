#include "main.h"

/**
 * _memcpy - copy n bytes of memory from source to destination
 * @dest: destination
 * @src: source
 * @n: number of bytes
 * Return: pointer to dest
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
    char* char_dest = (char*) dest;
    char* char_src = (char*) src;
 
    for (int i=0; i<n; i++) {
        *char_dest++ = *char_src++;
    }
 
    return dest;
}
