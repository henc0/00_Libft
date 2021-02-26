/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_pow_bonus.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nribeiro <nribeiro@student.42lisboa.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/26 09:44:58 by nribeiro          #+#    #+#             */
/*   Updated: 2021/02/26 09:44:59 by nribeiro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

long long	ft_pow(int number, unsigned int power)
{
	long long	temp;

	temp = number;
	if (power == 0)
		return (1);
	while (power > 1)
	{
		temp *= number;
		power--;
	}
	return (temp);
}
