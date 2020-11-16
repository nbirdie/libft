/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nbirdie <nbirdie@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/03 15:08:09 by nbirdie           #+#    #+#             */
/*   Updated: 2020/11/04 15:51:57 by nbirdie          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *src)
{
	int		i;
	char	*nsrc;

	i = 0;
	while (src[i] != '\0')
		i++;
	nsrc = malloc(sizeof(char) * (i + 1));
	if (nsrc == NULL)
		return (NULL);
	i = 0;
	while (src[i] != '\0')
	{
		nsrc[i] = src[i];
		i++;
	}
	nsrc[i] = '\0';
	return (nsrc);
}
