/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nbirdie <nbirdie@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/13 15:51:55 by nbirdie           #+#    #+#             */
/*   Updated: 2020/11/13 17:37:35 by nbirdie          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
/*
#1. the integer to convert.
Allocates (with malloc(3)) and returns a string
representing the integer received as an argument.
Negative numbers must be handled.
*/

char		ft_int_len(int n)
{
	int		k;

	k = 1;
	if (n == 0)
		return (2);
	while (n != 0)
	{
		n /= 10;
		k++;
	}
	return (k);
}

char		*ft_itoa(int n)
{
	char	*res;
	int		len;
	long	nn;
	int		neg;

	len = 0;
	neg = 0;
	if ((nn = n) < 0)
	{
		len = 1;
		nn *= -1;
		neg = 1;
	}
	len += ft_int_len(nn);
	if (!(res = malloc(sizeof(char) * len)))
		return (NULL);
	res[--len] = '\0';
	while (len--)
	{
		res[len] = nn % 10 + '0';
		nn /= 10;
	}
	if (neg == 1)
		res[0] = '-';
	return (res);
}
