/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/19 18:53:46 by marvin            #+#    #+#             */
/*   Updated: 2022/05/19 18:54:46 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcpy(char *dst, const char *src, size_t size)
{
	size_t	i;

	i = 0;
	if (size > 0)
	{
		while (src[i] && i < (size - 1))
		{
			dst[i] = src[i];
			i++;
		}
		dst[i] = '\0';
	}
	while (src[i])
		i++;
	return (i);
}
/*int main()
{
    char dest[50];
    char src[50];

    strcpy(src, "Hola como estas");

    ft_strlcpy(dest, src, 8);

    printf("%s\n", dest);
    printf("%s\n", src);
    printf("%zu", ft_strlcpy(dest, src, 8));

    return (0);
}*/
