#include "libft.h"

char *ft_strncpy(char *dst, const char *src, size_t n)
{
    size_t i;

    i = 0;
    while (src[i] && i < n)
    {
        dst[i] = src[i];
        i++;
    }
    while (i < n)
    {
        dst[i] = '\0';
        i++;
    }
    return (dst);
}