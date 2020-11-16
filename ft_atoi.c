/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nbirdie <nbirdie@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/03 15:06:37 by nbirdie           #+#    #+#             */
/*   Updated: 2020/11/03 20:05:48 by nbirdie          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int					ft_space(const char str)
{
	if ((str == ' ') || (str == '\n') || (str == '\v') ||
		(str == '\t') || (str == '\f') || (str == '\r'))
		return (1);
	else
		return (0);
}

int					ft_check_borders(unsigned long numb, int sign)
{
	unsigned long	border;

	border = 9223372036854775807;
	if (numb == 0)
		return (2);
	if (-numb == -border && sign == -1)
		return (1);
	if (-numb < -border && sign == -1)
		return (0);
	if (numb >= border && sign == 1)
		return (-1);
	return (2);
}

int					ft_atoi(const char *str)
{
	int				sign;
	unsigned long	numb;

	sign = 1;
	numb = 0;
	while (ft_space(*str))
		str++;
	if (*str == '-')
		sign = -1;
	if (*str == '-' || *str == '+')
		str += 1;
	while ((*str >= '0') && (*str <= '9'))
	{
		numb = (numb * 10) + (*str - '0');
		if (ft_check_borders(numb, sign) != 2)
			return (ft_check_borders(numb, sign));
		str++;
	}
	return (numb * sign);
}
