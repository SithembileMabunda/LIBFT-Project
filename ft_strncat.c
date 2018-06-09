/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smabunda <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/06/07 15:26:19 by smabunda          #+#    #+#             */
/*   Updated: 2018/06/09 15:38:47 by smabunda         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "header.h"
#include "src.h"

char	*ft_strncat(char *restrict s1, const char *restrict s2, size_t n)
{
	int i;

	i = 0;
	while (s1[i] != '\0')
		i++;
	int dest_len = i;
	while (s2[i] != '\0' && i < n)
	{
		s1[dest_len + i] = s2[i];
		i++;
	}
	s1[dest_len +i] = s2[i];
	return (s1);
}
