/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nribeiro <nribeiro@student.42lisboa.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/26 09:41:11 by nribeiro          #+#    #+#             */
/*   Updated: 2021/02/26 09:41:14 by nribeiro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_bzero(void *s, size_t n)
{
	unsigned char	*str_ptr;
	size_t			i;

	str_ptr = (unsigned char *)s;
	i = 0;
	while (i < n)
	{
		str_ptr[i] = 0;
		i++;
	}
}
