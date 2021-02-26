/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa_unsigned_longlong_bonus.c                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nribeiro <nribeiro@student.42lisboa.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/26 09:42:15 by nribeiro          #+#    #+#             */
/*   Updated: 2021/02/26 09:42:17 by nribeiro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int		ft_itoa_len(unsigned long long n)
{
	long long int	len;

	len = 0;
	while (n > 9)
	{
		n = n / 10;
		len++;
	}
	len++;
	return (len);
}

static void		ft_itoa_write(char *finish, unsigned long long len,
								unsigned long long n)
{
	while (n > 9)
	{
		finish[len--] = (n % 10) + '0';
		n = n / 10;
	}
	finish[len] = n + '0';
}

char			*ft_itoa_unsigned_longlong(unsigned long long int n)
{
	unsigned long long int	len;
	char					*finish;

	len = ft_itoa_len(n);
	finish = malloc((len + 1) * sizeof(char));
	if (finish == NULL)
		return (NULL);
	finish[len--] = '\0';
	ft_itoa_write(finish, len, n);
	return (finish);
}
