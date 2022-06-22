/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isdigit.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/19 18:03:44 by marvin            #+#    #+#             */
/*   Updated: 2022/05/19 18:04:02 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isdigit(int c)
{
	if (c >= '0' && c <= '9')
		return (1);
	return (0);
}

/*int main()
{
    int var1 = 'h';
    int var2 = '2';

    if (ft_isdigit(var1))
    {
        printf("var1 = |%c| is a digit\n", var1);
    }
    else
    {
        printf("var1 = |%c| is not a digit\n", var1);
    }

    if (isdigit(var2))
    {
        printf("var2 = |%c| is a digit\n", var2);
    }
    else
    {
        printf("var2 = |%c| is not a digit\n", var2);
    }

    return (0);
}*/
