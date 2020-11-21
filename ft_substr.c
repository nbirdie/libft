/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nbirdie <nbirdie@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/04 15:56:33 by nbirdie           #+#    #+#             */
/*   Updated: 2020/11/13 21:44:37 by nbirdie          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
/*
#1. The string from which to create the substring.
#2. The start index of the substring in the string ’s’.
#3. The maximum length of the substring.
Allocates (with malloc(3)) and returns a substring from the string ’s’.
The substring begins at index ’start’ and is of maximum size ’len’.
*/

char				*ft_substr(char const *s, unsigned int start, size_t len)
{
	char			*res;
	unsigned int	len_s;
	unsigned int	i;

	i = 0;
	if (s == NULL || res == NULL)
		return (NULL);
	res = (char *)malloc(sizeof(char) * (len + 1));
	if (len == 0)
		return (ft_strdup(""));
	len_s = ft_strlen(s);
	if (len_s < start)
	{
		*res = '\0';
		return (res);
	}
	while (len-- && s[start])
		res[i++] = s[start++];
	res[i] = '\0';
	return (res);
}
