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
