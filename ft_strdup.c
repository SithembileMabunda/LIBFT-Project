/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smabunda <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/06/07 15:23:47 by smabunda          #+#    #+#             */
/*   Updated: 2018/06/09 15:36:25 by smabunda         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "header.h"
#include "src.h"

char *ft_strdup(const char *s1)
{
	char *s2;
	int i;

	i = 0;
	while (s1[i] != '\0')
		i++;
	s2 = (char *) malloc(i * sizeof(char));
	i = 0;
	if (s2 != NULL)
	{
		while (s1[i] != '\0')
		{
			s2[i] = s1[i];
			i++;
		}
	}
	return (s2);
}
