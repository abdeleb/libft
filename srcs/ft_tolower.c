/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_tolower.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/19 19:04:02 by marvin            #+#    #+#             */
/*   Updated: 2022/05/19 19:04:14 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_tolower(int c)
{
	if (c >= 65 && c <= 90)
		return (c + 32);
	else
		return (c);
}

/*int main()
{
    int i = 0;
    char c;
    char str[] = "Tutorials Point";

    while (str[i])
    {
        putchar(ft_tolower(str[i]));
        i++;
    }

    return (0);
}*/
