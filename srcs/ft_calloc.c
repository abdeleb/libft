/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/19 17:52:03 by marvin            #+#    #+#             */
/*   Updated: 2022/05/19 19:08:00 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t count, size_t size)
{
	size_t	tot_size;
	void	*dest;

	tot_size = size * count;
	dest = malloc(tot_size);
	if (!dest)
		return (NULL);
	ft_memset(dest, 0, tot_size);
	return (dest);
}

/*int main()
{
    int i, n;
    int *a;

    printf("Number of elements to be entered:");
    scanf("%d", &n);

    a = (int *)ft_calloc(n, sizeof(int));
    printf("Enter %d numbers:\n", n);
    for (i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }

    printf("The numbers entered are: ");
    for (i = 0; i < n; i++)
    {
        printf("%d ", a[i]);
    }
    free(a);

    return (0);
}*/
