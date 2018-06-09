/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smabunda <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/06/07 15:27:45 by smabunda          #+#    #+#             */
/*   Updated: 2018/06/09 15:40:15 by smabunda         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "header.h"
#include "src.h"

char	*ft_strrchr(const char *s, int c)
{
	int i;
	
	while (s[i] != '\0')
		i++;
	if (c == '\0')
		return ((char *)s);
	if (s == NULL)
		return (NULL);
	while (s[i] != 0)
	{
		if (s[i] == c)
			return ((char *)s + i);
		i--;
	}
	return (0);
}
