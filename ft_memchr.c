/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nbirdie <nbirdie@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/01 16:34:46 by nbirdie           #+#    #+#             */
/*   Updated: 2020/11/01 18:23:36 by nbirdie          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
/*
memchr -- locate byte in byte string
The memchr() function locates the first occurrence of c (converted to an unsigned char) in string s.
The memchr() function returns a pointer to the byte located, or NULL if no such byte exists within n bytes.
*/

void				*ft_memchr(const void *s, int c, size_t n)
{
	unsigned char	a;
	unsigned char	*s1;

	a = (unsigned char)c;
	s1 = (unsigned char *)s;
	while (n--)
	{
		if (*s1++ == a)
			return (s1 - 1);
	}
	return (NULL);
}
