/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smabunda <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/06/07 15:21:23 by smabunda          #+#    #+#             */
/*   Updated: 2018/06/07 15:21:31 by smabunda         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../Include/Headers.h"
#include "../Includes/Projects.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	unsigned char *dest;
	unsigned char *sos;
	int i;

	i = 0;
	if (sos <= dest)
	{
		while (i < len)
		{
			dest[len] = sos[len];
			--len;
		}
	}
	else
		;
	return (dst);
}
