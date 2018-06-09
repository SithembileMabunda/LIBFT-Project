/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smabunda <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/06/07 15:19:41 by smabunda          #+#    #+#             */
/*   Updated: 2018/06/09 15:29:00 by smabunda         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "header.h"
#include "src.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	int i;

	i = 0;
	if (c == '\0')
		return ((char *)s);
	if (s == NULL)
		return (NULL);
	while (s[i] != '\0' && i < n)
	{
		if (s[i] == c)
			return ((char *)s + i);
		i++;
	}
	return (0);
}
