/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nribeiro <nribeiro@student.42lisboa.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/26 09:44:26 by nribeiro          #+#    #+#             */
/*   Updated: 2021/02/26 09:44:28 by nribeiro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	char		*dest_ptr;
	const char	*src_ptr;
	int			i;

	if (!src && !dest)
		return (NULL);
	dest_ptr = (char *)dest;
	src_ptr = (char *)src;
	i = 0;
	while (n > 0)
	{
		dest_ptr[i] = src_ptr[i];
		i++;
		n--;
	}
	return (dest);
}
