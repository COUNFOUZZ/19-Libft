#include "libft.h"

int ft_strlen(char  *str)
{
    int i;

    i = 0;
    while (str[i])
        i++;
    return (i);
}

char    *ft_strdup(const char *s)
{
    char    *str;
    int     i;

    str = (char *)malloc(sizeof(char) * (ft_strlen(s) + 1));
    if (!str)
        return (0);
    i = 0;
    while (s[i])
    {
        str[i] = s[i];
        i++;
    }
    str[i] = '\0';
    return (str);
}

int main(void)
{
    char *test = "Salut paté";

    printf("%s\n", ft_strdup(test));
    return (0);
}