/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nbirdie <nbirdie@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/02 17:25:16 by nbirdie           #+#    #+#             */
/*   Updated: 2020/11/03 16:46:35 by nbirdie          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
/*
strstr, strcasestr, strnstr -- locate a substring in a string
*/

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	size_t len_needle;
	size_t k;
	size_t i;

	i = 0;
	if (*needle == '\0')
		return ((char *)haystack);
	len_needle = ft_strlen(needle);
	while (haystack[i] != '\0' && i <= len - len_needle)
	{
		if (haystack[i] == needle[0])
		{
			k = 1;
			while (k < len_needle && haystack[i + k] == needle[k] &&
			(i + k) < len)
				k++;
			if (k == len_needle)
				return ((char *)&haystack[i]);
		}
		i++;
	}
	return (NULL);
}
