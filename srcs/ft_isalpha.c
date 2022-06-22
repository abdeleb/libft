/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalpha.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/19 18:02:39 by marvin            #+#    #+#             */
/*   Updated: 2022/05/19 18:02:52 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isalpha(int c)
{
	if ((c >= 65 && c <= 90) || (c >= 97 && c <= 122))
		return (1);
	return (0);
}

/*int main()
{
    int var1 = 'd';
    int var2 = '2';
    int var3 = '\t';
    int var4 = ' ';

    if (ft_isalpha(var1))
    {
        printf("var1 = |%c| is an alphabet\n", var1);
    }
    else
    {
        printf("var1 = |%c| is not an alphabet\n", var1);
    }

    if (isalpha(var2))
    {
        printf("var2 = |%c| is an alphabet\n", var2);
    }
    else
    {
        printf("var2 = |%c| is not an alphabet\n", var2);
    }

    if (isalpha(var3))
    {
        printf("var3 = |%c| is an alphabet\n", var3);
    }
    else
    {
        printf("var3 = |%c| is not an alphabet\n", var3);
    }

    if (isalpha(var4))
    {
        printf("var4 = |%c| is an alphabet\n", var4);
    }
    else
    {
        printf("var4 = |%c| is not an alphabet\n", var4);
    }

    return (0);
}*/
