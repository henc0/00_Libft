/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_toupper.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nribeiro <nribeiro@student.42lisboa.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/26 09:47:36 by nribeiro          #+#    #+#             */
/*   Updated: 2021/02/26 09:47:38 by nribeiro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_toupper(int c)
{
	int	re;

	if (c < -1)
		return ((unsigned char)c);
	if (c >= 97 && c <= 122)
		return (c - 32);
	else
		re = c;
	return (re);
}
