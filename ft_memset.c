/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nbirdie <nbirdie@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/28 22:01:20 by nbirdie           #+#    #+#             */
/*   Updated: 2020/10/29 17:25:15 by nbirdie          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
/*
memset -- fill a byte string with a byte value
The memset() function writes len bytes of value c (converted to an unsigned char) to the string b.
The memset() function returns its first argument.
*/

void				*ft_memset(void *b, int c, size_t len)
{
	unsigned char	a;
	size_t			i;

	a = (unsigned char)c;	//переводим инт с в чары (ascii), чтобы потом заполнить массив а 
	i = len;
	while (len--)
		*(unsigned char *)b++ = a;
	b = b - i;		//возвращаем указатель на начало
	return (b);
}
