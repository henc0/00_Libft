/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nribeiro <nribeiro@student.42lisboa.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/26 09:44:33 by nribeiro          #+#    #+#             */
/*   Updated: 2021/02/26 09:44:34 by nribeiro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t n)
{
	if (!dst && !src)
		return (NULL);
	if (src < dst)
	{
		while (n--)
		{
			((unsigned char *)dst)[n] = ((unsigned char *)src)[n];
		}
	}
	else if (src > dst)
	{
		ft_memcpy(dst, src, n);
	}
	return (dst);
}
