/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nbirdie <nbirdie@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/29 18:37:05 by nbirdie           #+#    #+#             */
/*   Updated: 2020/11/01 18:14:36 by nbirdie          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
/*
memmove -- copy byte string
The memmove() function copies len bytes from string src to string dst.
The two strings may overlap; the copy is always done in a non-destructive manner.
*/

void				*ft_memmove(void *dst, const void *src, size_t len)
{
	unsigned char	*s1;
	unsigned char	*s2;

	s1 = (unsigned char *)dst;
	s2 = (unsigned char *)src;
	if (!dst && !src)
		return (0);
	if (s1 < s2)
	{
		while (len--)
			*s1++ = *s2++;
	}
	else
	{
		while (len--)
			*(s1 + len) = *(s2 + len);
	}
	return (dst);
}
