/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_tolower.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nribeiro <nribeiro@student.42lisboa.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/26 09:47:30 by nribeiro          #+#    #+#             */
/*   Updated: 2021/02/26 09:47:31 by nribeiro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_tolower(int c)
{
	int	re;

	if (c < -1)
		return ((unsigned char)c);
	if (c >= 65 && c <= 90)
		return (c + 32);
	else
		re = c;
	return (re);
}
