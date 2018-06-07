/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smabunda <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/06/07 15:28:15 by smabunda          #+#    #+#             */
/*   Updated: 2018/06/07 15:28:37 by smabunda         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../Include/Headers.h"
#include "../Includes/Projects.h"

char	*ft_strstr(const char *haystack, const char *needle)
{
	int i;
	int j;
	
	i = 0;
	j = 0;
	if (needle == NULL)
		return (haystack);
	while (haystack != '\0')
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
