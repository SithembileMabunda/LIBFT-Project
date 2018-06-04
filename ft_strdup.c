/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   strdup.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smabunda <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/05/15 08:05:19 by smabunda          #+#    #+#             */
/*   Updated: 2018/05/22 16:16:21 by smabunda         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include <stdlib.h>

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
