/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smabunda <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/06/07 15:22:44 by smabunda          #+#    #+#             */
/*   Updated: 2018/06/13 08:11:50 by smabunda         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	int i;
	int j;
	int len;

	i = 0;
	j = 0;
	while (dstsize != 0 && dst[i] != '\0')
	{
		i++;
		dstsize--;
	}
	if ((dstsize - 1) == 0)
		return ((i) + ft_strlen(src));
	len = dstsize - i;
	while (src[j] != '\0')
	{
		if (len != 1)
		{
			dst[i] = src[j];
			len--;
			i++;
		}
		j++;
	}
	dst[i] = '\0';
	return (i);
}
