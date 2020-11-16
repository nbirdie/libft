/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nbirdie <nbirdie@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/04 19:55:38 by nbirdie           #+#    #+#             */
/*   Updated: 2020/11/13 23:30:34 by nbirdie          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
/*
#1. The string to be trimmed.
#2. The reference set of characters to trim
Allocates (with malloc(3)) and returns a copy of ’s1’ with the characters specified in ’set’ removed
from the beginning and the end of the string.
*/

char		*ft_check(char c, char const *s)
{
	char	*ss;

	ss = (char *)s;
	while (*ss)
	{
		if (*ss++ == c)
			return (ss - 1);
	}
	if (c == '\0')
		return (ss);
	return (0);
}

char		*ft_strtrim(char const *s1, char const *set)
{
	char	*res;
	char	*str;
	size_t	i;

	str = (char *)s1;
	if (!str || !set)
		return (NULL);
	i = 0;
	while (*str && ft_check(*str, set))
		str++;
	i = ft_strlen(str);
	while (ft_check(str[i], set) && i)
		i--;
	if (!(res = ft_substr(str, 0, i + 1)))
		return (NULL);
	return (res);
}
