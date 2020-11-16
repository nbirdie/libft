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

char				*ft_substr(char const *s, unsigned int start, size_t len)
{
	char			*res;
	unsigned int	len_s;
	unsigned int	i;

	i = 0;
	res = (char *)malloc(sizeof(char) * (len + 1));
	if (s == NULL || res == NULL)
		return (NULL);
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
