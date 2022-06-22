/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/19 18:55:51 by marvin            #+#    #+#             */
/*   Updated: 2022/05/19 18:56:24 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	unsigned int	i;
	char			*str;

	i = -1;
	str = (char *)malloc(sizeof(char) * (ft_strlen(s)) + 1);
	if (str == NULL)
		return (NULL);
	while (s[++i] != '\0')
		str[i] = f(i, s[i]);
	str[i] = '\0';
	return (str);
}

/*int main()
{
    char a[50];

    strcpy(a, "Hola que tal");

    ft_strmapi(a, ft_toupper(0));
    printf("%s", a);
}*/
