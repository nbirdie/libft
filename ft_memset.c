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

void				*ft_memset(void *b, int c, size_t len)
{
	unsigned char	a;
	size_t			i;

	a = (unsigned char)c;
	i = len;
	while (len--)
		*(unsigned char *)b++ = a;
	b = b - i;
	return (b);
}
