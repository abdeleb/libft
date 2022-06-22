/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/19 21:51:13 by marvin            #+#    #+#             */
/*   Updated: 2022/05/19 22:11:09 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	unsigned int	size;
	char			*ret;

	size = ft_strlen(s);
	if (!s)
		return (NULL);
	if (len <= 0 || start > size)
		return (ft_strdup(""));
	if (len > size - start)
		len = size - start;
	ret = malloc(sizeof(char) * (len + 1));
	if (ret == NULL)
		return (NULL);
	ft_strlcpy(ret, (char *)(s + start), len + 1);
	return (ret);
}

/*int main()
{

	char src[50];

	strcpy(src, "Hola como estas");

	printf("%s\n", src);

	printf("%s\n", ft_substr(src, 5, 6));

	return 0;
}*/
