/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smabunda <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/06/07 15:53:21 by smabunda          #+#    #+#             */
/*   Updated: 2018/06/09 15:37:25 by smabunda         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "header.h"
#include "src.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	int i;
	char *dest;

	i = 0;
	while (s1[i] != '\0')
		i++;
	while (s2[i] != '\0')
		i++;
	dest = (char *) malloc(sizeof(int) * (s1[i] + s2[i]));
	if (dest == NULL)
		return (NULL);
	else
	{
		i = 0;
		while (s1[i] != '\0')
		{
			dest[i] = s1[i];
			i++;
		}
		while (s2[i] != '\0')
		{
			dest[i] = s2[i];
			i++;
		}
	}
	dest[i] = '\0';
	return (dest);
}
