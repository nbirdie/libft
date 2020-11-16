/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nbirdie <nbirdie@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/04 18:40:20 by nbirdie           #+#    #+#             */
/*   Updated: 2020/11/06 17:35:14 by nbirdie          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
/*
#1. The prefix string.
#2. The suffix string.
Allocates (with malloc(3)) and returns a new string, which is the result of the concatenation
of ’s1’ and ’s2’.
*/

char		*ft_strjoin(char const *s1, char const *s2)
{
	char	*res;
	size_t	i1;
	size_t	i2;
	size_t	i;

	i1 = 0;
	i2 = 0;
	i = 0;
	if (!s1 && !s2)
		return (NULL);
	if (s1 != '\0')
		i1 = ft_strlen(s1);
	if (s2 != '\0')
		i2 = ft_strlen(s2);
	if (!(res = (char *)malloc(sizeof(char) * (i1 + i2 + 1))))
		return (NULL);
	while (i1--)
		res[i++] = *s1++;
	while (i2--)
		res[i++] = *s2++;
	res[i] = '\0';
	return (res);
}
