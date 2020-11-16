/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nbirdie <nbirdie@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/01 16:34:58 by nbirdie           #+#    #+#             */
/*   Updated: 2020/11/03 21:42:48 by nbirdie          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
/*
strlcat -- size-bounded string copying and concatenation
strlcat() appends string src to the end of dst.  It will append at most dstsize - strlen(dst)
     - 1 characters.  It will then NUL-terminate, unless dstsize is 0 or the original dst string
     was longer than dstsize (in practice this should not happen as it means that either dstsize
     is incorrect or that dst is not a proper string).

     If the src and dst strings overlap, the behavior is undefined.
*/

#include "libft.h"

size_t		ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	size_t	len_dst;
	size_t	len_res;

	len_dst = ft_strlen(dst);
	if (dstsize < len_dst)
		return (ft_strlen(src) + dstsize);
	len_res = ft_strlen(src) + len_dst;
	dst += len_dst;
	dstsize -= len_dst;
	while (*src && dstsize-- > 1)
		*dst++ = *src++;
	*dst = '\0';
	return (len_res);
}
