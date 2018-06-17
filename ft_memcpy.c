/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smabunda <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/06/07 15:20:55 by smabunda          #+#    #+#             */
/*   Updated: 2018/06/17 10:43:41 by smabunda         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	size_t	i;
	char	*dst;
	char	*str;

	dst = (char *)dest;
	str = (char *)src;
	i = 0;
	while (i < n)
	{
		dst[i] = str[i];
		i++;
	}
	return (dst);
}
