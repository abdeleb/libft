/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/19 18:35:11 by marvin            #+#    #+#             */
/*   Updated: 2022/05/19 18:35:57 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *s, int c, size_t n)
{
	char	*ptr;

	ptr = (char *)s;
	while (n > 0)
	{
		ptr[n - 1] = c;
		n--;
	}
	return (s);
}

/*int main()
{
    char str[50];

    strcpy(str, "This is string.h library function");
    puts(str);

    ft_memset(str, '$', 3);
    puts(str);

    return (0);
}*/
