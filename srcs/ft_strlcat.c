/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/19 18:52:26 by marvin            #+#    #+#             */
/*   Updated: 2022/05/19 18:53:34 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dest, const char *src, size_t size)
{
	size_t	i;
	size_t	len;

	i = 0;
	len = 0;
	if (size <= ft_strlen(dest))
		return (size + ft_strlen(src));
	while (dest[len] && len < size)
		len++;
	while (src[i] && (len + i + 1) < size)
	{
		dest[len + i] = src[i];
		i++;
	}
	if (len != size)
		dest[len + i] = '\0';
	return (len + ft_strlen(src));
}

/*int main()
{
    char dest[50];
    char src[50];

    strcpy(src, " que tal");
    strcpy(dest, "Hola");

    printf("%s\n", dest);
    printf("%s\n\n", src);

    ft_strlcat(dest, src, -1);

    printf("%s\n", dest);
    printf("%zu", ft_strlcat(dest, src, -1));

    return (0);
}*/
