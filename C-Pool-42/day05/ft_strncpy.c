#include <stdio.h>
#include <stdlib.h>
#include <string.h>

char *ft_strncpy(char *dest, char *src, int n)
{
    int i = 0;

    while (i < n && src[i] != '\0') {
        dest[i] = src[i];
        i = i + 1;
    }
    dest[i] = '\0';
    return dest;
}
