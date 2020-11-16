/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memccpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nbirdie <nbirdie@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/29 19:35:01 by nbirdie           #+#    #+#             */
/*   Updated: 2020/10/29 21:17:35 by nbirdie          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
/*
memccpy -- copy string until character found
The memccpy() function copies bytes from string src to string dst.  If the
character c (as converted to an unsigned char) occurs in the string src, the
copy stops and a pointer to the byte after the copy of c in the string dst is
returned.  Otherwise, n bytes are copied, and a NULL pointer is returned.

The source and destination strings should not overlap, as the behavior is undefined.
*/

void				*ft_memccpy(void *dst, const void *src, int c, size_t n)
{
	unsigned char	a;
	unsigned char	*s1;
	unsigned char	*s2;

	a = (unsigned char)c;
	s1 = (unsigned char *)dst;
	s2 = (unsigned char *)src;
	while (n--)
	{
		if (*s2 == a)
		{
			*s1++ = *s2;
			return (s1);
		}
		*s1++ = *s2++;
	}
	return (NULL);
}
