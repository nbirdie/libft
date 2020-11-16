/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nbirdie <nbirdie@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/01 16:34:50 by nbirdie           #+#    #+#             */
/*   Updated: 2020/11/01 18:35:35 by nbirdie          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
/*
memcmp -- compare byte string
The memcmp() function compares byte string s1 against byte string s2.  Both strings are
     assumed to be n bytes long.
The memcmp() function returns zero if the two strings are identical, otherwise returns the
difference between the first two differing bytes (treated as unsigned char values, so that
`\200' is greater than `\0', for example).  Zero-length strings are always identical.  This
behavior is not required by C and portable code should only depend on the sign of the
returned value.
*/

int		ft_memcmp(const void *s1, const void *s2, size_t n)
{
	unsigned char *s11;
	unsigned char *s22;

	s11 = (unsigned char *)s1;
	s22 = (unsigned char *)s2;
	while (n--)
	{
		if (*s11++ != *s22++)
			return (*(s11 - 1) - *(s22 - 1));
	}
	return (0);
}
