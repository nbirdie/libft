/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nbirdie <nbirdie@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/29 17:48:35 by nbirdie           #+#    #+#             */
/*   Updated: 2020/11/01 18:14:41 by nbirdie          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
/*
memcpy -- copy memory area
The memcpy() function copies n bytes from memory area src to memory area dst. If dst and src overlap, behavior is undefined.
Applications in which dst and src might overlap should use memmove(3) instead.
The memcpy() function returns the original value of dst.
*/

void	*ft_memcpy(void *dst, const void *src, size_t n)
{
	char *s1;
	char *s2;

	s1 = (char *)dst;
	s2 = (char *)src;
	if (dst == src)
		return (dst);	//чтобы ускорить процесс проверяем равенство сначала
	while (n--)
		*s1++ = *s2++;	//иначе пока size не закончится копируем
	return (dst);
}
