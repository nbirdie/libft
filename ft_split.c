/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nbirdie <nbirdie@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/07 19:19:18 by nbirdie           #+#    #+#             */
/*   Updated: 2020/11/14 16:21:30 by nbirdie          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
/*
#1. The string to be split.
#2. The delimiter character.
Allocates (with malloc(3)) and returns an array
of strings obtained by splitting ’s’ using the
character ’c’ as a delimiter. The array must be
ended by a NULL pointer.
*/

static char			**ft_malloc_free(char **res)
{
	unsigned int	i;

	i = 0;
	while (res[i])
	{
		free(res[i]);
		i++;
	}
	free(res);
	return (NULL);
}

int					ft_numb_strs(char const *ss, char c)
{
	unsigned int	num_words;
	char			*s;

	s = (char *)ss;
	if (!s)
		return (0);
	num_words = 0;
	while (*s)
	{
		while (*s == c)
			s++;
		if (*s)
		{
			num_words += 1;
			while (*s != c && *s)
				s++;
		}
	}
	return (num_words);
}

int					ft_len_str(char *str, char c)
{
	unsigned int	i;

	i = 0;
	while (str[i] != '\0' && str[i] != c)
		i++;
	return (i);
}

static char			*ft_trimm(char *s, char c)
{
	char			*str;

	str = s;
	while (*str && *str == c)
		str++;
	return (str);
}

char				**ft_split(char const *s, char c)
{
	char			**res;
	char			*str;
	unsigned int	len_str;
	unsigned int	numb_strs;
	unsigned int	i;

	if (!s)
		return (NULL);
	numb_strs = ft_numb_strs(s, c);
	if (!(res = (char **)malloc(sizeof(char *) * (numb_strs + 1))))
		return (NULL);
	i = 0;
	len_str = 0;
	str = (char *)s;
	while (i < numb_strs)
	{
		str = ft_trimm(str, c);
		len_str = ft_len_str(str, c);
		if (!(res[i] = ft_substr(str, 0, len_str)))
			ft_malloc_free(res);
		str += len_str;
		i++;
	}
	res[i] = NULL;
	return (res);
}
