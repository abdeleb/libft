/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/19 19:01:45 by marvin            #+#    #+#             */
/*   Updated: 2022/05/19 19:02:12 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	char	*ret;

	ret = NULL;
	while (*s)
	{
		if (*s == (const char)c)
			ret = (char *)s;
		s++;
	}
	if (*s == (const char)c)
		return ((char *)s);
	return (ret);
}

/*int main()
{
    int len;
    const char str[] = "http://www.w3cschool.cc";
    const char ch = 'z';
    char *ret;

    ret = strrchr(str, ch);

    printf("|%c| |%s|\n", ch, ret);

    return (0);
}*/
