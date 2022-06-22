/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/19 18:05:13 by marvin            #+#    #+#             */
/*   Updated: 2022/06/02 16:58:07 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_len_sign(int number, int *nonpositive_ptr)
{
	int	len;

	if (number <= 0)
		*nonpositive_ptr = 1;
	else
		*nonpositive_ptr = 0;
	len = 1;
	while (number)
	{
		number /= 10;
		len++;
	}
	return (len + *nonpositive_ptr);
}

static void	ft_print_string(char *string, int last,
							int number, int negative)
{
	while (number)
	{
		if (negative)
			string[last--] = 48 + ((number % 10) * (-1));
		else
			string[last--] = 48 + (number % 10);
		number /= 10;
	}
}

char	*ft_itoa(int number)
{
	int		len;
	int		nonpositive;
	char	*string;

	len = ft_len_sign(number, &nonpositive);
	string = ft_calloc((size_t)(len), sizeof(char));
	if (!(string))
		return (NULL);
	if (number == 0)
		string[0] = '0';
	if (number < 0)
		string[0] = '-';
	ft_print_string(string, (len - 2), number, nonpositive);
	return (string);
}

/* int main()
{
	printf(ft_itoa(-2147483648));

	return 0;
}*/
