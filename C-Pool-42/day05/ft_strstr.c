#include <stdio.h>

char *ft_strstr(char const *haystack, char const *needle)
{
    int j = 0;

    if (needle[0] == '\0')
        return (char *)haystack;
    for (int i = 0; haystack[i] != '\0'; i++) {
        while (haystack[i + j] == needle[j] && needle[j] != '\0') {
            j++;
        }
        if (needle[j] == '\0')
            return (char *)&haystack[i];
    }
    return NULL;
}

int main(void)
{
    char *str = "Hello student";
    char *search = "42";
    char *result = ft_strstr(str, search);

    if (result)
        printf("Found : %s\n", result);
    else
        printf("Not found\n");

    return 0;
}