/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/19 18:32:50 by marvin            #+#    #+#             */
/*   Updated: 2022/06/22 16:42:05 by aettouha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	size_t			i;
	unsigned char	*d;
	unsigned char	*s;

	if (!dest && !src)
		return (NULL);
	d = (unsigned char *)dest;
	s = (unsigned char *)src;
	i = 0;
	while (i < n)
	{
		d[i] = s[i];
		i++;
	}
	return (dest);
}

/*int main()
{
    char dest[50];
    strcpy(dest, "Helloooo!!");
    const char src[50] = "http://www.42barcelonatef.com";

    printf("Before memcpy dest = %s\n", dest);
    ft_memcpy(dest, src, 12);
    printf("After memcpy dest = %s\n", dest);

    return (0);
}*/
