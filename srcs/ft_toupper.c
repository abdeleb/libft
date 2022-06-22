/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_toupper.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/19 19:04:22 by marvin            #+#    #+#             */
/*   Updated: 2022/05/19 19:04:34 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_toupper(int c)
{
	if (c >= 97 && c <= 122)
		return (c - 32);
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
        putchar(ft_toupper(str[i]));
        i++;
    }

    return (0);
}*/
