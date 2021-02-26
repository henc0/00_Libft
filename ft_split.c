/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nribeiro <nribeiro@student.42lisboa.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/26 09:45:34 by nribeiro          #+#    #+#             */
/*   Updated: 2021/02/26 09:45:35 by nribeiro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static size_t	get_length(const char *s, char c)
{
	int count;

	count = 0;
	while (*s)
	{
		if (*s++ == c)
			continue ;
		count++;
		while (*s && *s != c)
			s++;
	}
	return (count);
}

char			**ft_split(char const *s, char c)
{
	char	**strs;
	char	**sav_strs;
	char	*sav_s;

	if (!s)
		return (0);
	if (!(strs = malloc((get_length(s, c) + 1) * sizeof(char *))))
		return (0);
	sav_strs = strs;
	while (*s)
	{
		if (*s == c)
		{
			s++;
			continue ;
		}
		sav_s = (char *)s;
		while (*s && *s != c)
			s++;
		if (!(*strs = malloc((s - sav_s + 1) * sizeof(char))))
			return (0);
		ft_strlcpy(*strs++, sav_s, s - sav_s + 1);
	}
	*strs = 0;
	return (sav_strs);
}
