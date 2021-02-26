/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nribeiro <nribeiro@student.42lisboa.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/26 09:44:41 by nribeiro          #+#    #+#             */
/*   Updated: 2021/02/26 09:44:42 by nribeiro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *str, int c, size_t n)
{
	char	*ptr;

	ptr = (char *)str;
	while (n > 0)
	{
		*ptr++ = (unsigned char)c;
		n--;
	}
	return (str);
}
