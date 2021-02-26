/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoinchr_bonus.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nribeiro <nribeiro@student.42lisboa.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/26 09:46:04 by nribeiro          #+#    #+#             */
/*   Updated: 2021/02/26 09:46:06 by nribeiro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoinchr(char *s1, char s2)
{
	int		i;
	char	*temp;
	int		len;

	i = 0;
	if (!s1 || !s2)
		return (NULL);
	len = ft_strlen(s1);
	temp = malloc((len + 2) * sizeof(char));
	if (temp == NULL)
		return (NULL);
	while (s1[i] != '\0')
	{
		temp[i] = s1[i];
		i++;
	}
	temp[i] = s2;
	i++;
	temp[i] = '\0';
	return (temp);
}
