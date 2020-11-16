/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nbirdie <nbirdie@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/02 16:06:43 by nbirdie           #+#    #+#             */
/*   Updated: 2020/11/03 15:03:44 by nbirdie          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char		*ft_strrchr(const char *s, int c)
{
	char	*ss;
	char	a;
	size_t	len;

	a = (char)c;
	ss = (char *)s;
	len = ft_strlen(s) + 1;
	if (a == '\0')
		return (ss + (len - 1));
	while (len)
	{
		if (ss[len - 1] == a)
			return (&ss[len - 1]);
		len--;
	}
	return (0);
}
