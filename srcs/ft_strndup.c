#include "libft.h"

char *ft_strndup(const char *s, size_t n)
{
    char *str;

    str = (char *)malloc(sizeof(char) * (n + 1));
    if (str == NULL)
        return (NULL);
    str = ft_strncpy(str, s, n);
    str[n] = '\0';
    return (str);
}