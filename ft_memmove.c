/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smabunda <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/06/07 15:21:23 by smabunda          #+#    #+#             */
/*   Updated: 2018/06/17 10:44:00 by smabunda         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	unsigned char	*dest;
	unsigned char	*sos;
	size_t			i;

	i = 0;
	sos = (unsigned char *)src;
	dest = (unsigned char *)dst;
	if (sos < dest)
	{
		while (len--)
		{
			dest[len] = sos[len];
		}
	}
	else
	{
		while (i < len)
		{
			if (dest[i] != sos[i])
				dest[i] = sos[i];
			i++;
		}
	}
	return (dst);
}
