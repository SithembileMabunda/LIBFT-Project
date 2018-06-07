/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smabunda <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/06/07 15:20:55 by smabunda          #+#    #+#             */
/*   Updated: 2018/06/07 15:21:05 by smabunda         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../Include/Headers.h"
#include "../Includes/Projects.h"

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	int i;
	char *dst;
	char *str;

	dst = (char *)dest;
	str = (char *)src;
	while (src[i] != '\0' && i < n)
	{
		dst[i] = str[i];
	}
	while (i < n)
	{
		dst[i] = '\0';
		i++;
	}
	return (dst);
}
