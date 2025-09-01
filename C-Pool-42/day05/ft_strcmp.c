#include <stdio.h>

int ft_strcmp(char const *s1, char const *s2)
{
    for (int i = 0; s1[i] != '\0' && s2[i] != '\0'; i++) {
        if (s1[i] != s2[i]) {
            return -1;
        }
    }
    return 0;
}

int main (void)
{
    char *s1 = "hllo";
    char *s2 = "hello";

    printf("%d\n", ft_strcmp(s1, s2));
}