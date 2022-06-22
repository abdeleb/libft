/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/19 18:34:20 by marvin            #+#    #+#             */
/*   Updated: 2022/06/22 16:42:30 by aettouha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t len)
{
	size_t	i;

	if (!dest && !src)
		return (NULL);
	i = 0;
	if (src < dest)
	{
		while (++i <= len)
			((char *)dest)[len - i] = ((char *)src)[len - i];
	}
	else
		ft_memcpy(dest, src, len);
	return (dest);
}

/*int main()
{
    char dest[] = "oldstring";
    const char src[] = "newstring";

    printf("Before memmove dest = %s, src = %s\n", dest, src);
    memmove(dest, src, 2);
    printf("After memmove dest = %s, src = %s\n", dest, src);

    return (0);
}*/
