#include <stdio.h>

int is_alpha_numeric(char c)
{
    return ((c >= 'A' && c <= 'Z') ||
            (c >= 'a' && c <= 'z') ||
            (c >= '0' && c <= '9'));
}

char *ft_strcapitalize(char *str)
{
    int i = 0;
    int new_word = 1;

    while (str[i] != '\0')
    {
        if (str[i] >= 'A' && str[i] <= 'Z')
            str[i] += 32;
        if ((str[i] >= 'a' && str[i] <= 'z') && new_word) {
            str[i] -= 32;
            new_word = 0;
        } else if ((str[i] >= '0' && str[i] <= '9')) {
            new_word = 0;
        } else if (!is_alpha_numeric(str[i])) {
            new_word = 1;
        }
        i++;
    }
    return str;
}

int main (void)
{
    char phrase[] = "salut, cOmMent tu vas ? 42mots quarante-deux;cinquante+et+un";
    printf("Résultat : %s\n", ft_strcapitalize(phrase));
    return 0;
}
