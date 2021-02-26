/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nribeiro <nribeiro@student.42lisboa.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/26 09:47:03 by nribeiro          #+#    #+#             */
/*   Updated: 2021/02/26 09:47:04 by nribeiro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *big, const char *little, size_t len)
{
	size_t	a;
	size_t	b;

	a = 0;
	if (!*little)
		return ((char *)big);
	while (big[a] != '\0' && a < len)
	{
		b = 0;
		while (big[a + b] != '\0' && big[a + b] == little[b]
			&& (a + b) < len && little[b] != '\0')
		{
			if (little[b + 1] == '\0')
				return ((char *)&(big[a]));
			b++;
		}
		a++;
	}
	return (0);
}
