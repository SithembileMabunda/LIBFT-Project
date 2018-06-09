/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smabunda <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/06/07 15:29:21 by smabunda          #+#    #+#             */
/*   Updated: 2018/06/09 15:40:02 by smabunda         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "header.h"
#include "src.h"

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	int i;
	int j;

	i = 0;
	j = 0;
	if (needle == NULL)
		return (haystack);
	while (i < len && haystack != '\0')
	{
		if (haystack[i] == needle[j])
		{
			while (haystack[i] == needle[j] && needle[j] != '\0')
			{
				i++;
				j++;
			}
			if (needle[j] == '\0')
				return (&haystack[i - j]);
		}
		i++;
	}
	return (NULL);
}
