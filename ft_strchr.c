/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nbirdie <nbirdie@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/03 14:46:02 by nbirdie           #+#    #+#             */
/*   Updated: 2020/11/03 15:04:14 by nbirdie          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
/*
strchr, strrchr -- locate character in string
The strrchr() function is identical to strchr(), except it locates the last occurrence of c.
*/

char	*ft_strchr(const char *s, int c)
{
	char *ss;
	char a;

	a = (char)c;
	ss = (char *)s;
	while (*ss)
	{
		if (*ss++ == a)
			return (ss - 1);
	}
	if (a == '\0')
		return (ss);
	return (0);
}
