/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smabunda <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/06/07 15:29:21 by smabunda          #+#    #+#             */
/*   Updated: 2018/06/15 12:12:22 by smabunda         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	size_t i;
	size_t j;

	i = 0;
	if (needle[0] == '\0')
		return ((char *)haystack);
	while (i < len && haystack[i] != '\0')
	{
		j = 0;
		while ((i + j) < len && haystack[i + j] == needle[j] &&
				needle[j] != '\0' && haystack[i + j] != '\0')
		{
			j++;
		}
		if (needle[j] == '\0')
			return ((char *)&haystack[i]);
		else
			i++;
	}
	return (0);
}
