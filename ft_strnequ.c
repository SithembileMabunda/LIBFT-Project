/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnequ.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smabunda <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/06/07 15:49:40 by smabunda          #+#    #+#             */
/*   Updated: 2018/06/07 15:49:50 by smabunda         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../Include/Headers.h"
#include "../Includes/Projects.h"

int		ft_strnequ(char const *s1, char const *s2, size_t n)
{
	int i;
	char *first;
	char *second;

	first = (char *)s1;
	second = (char *)s2;
	i = 0;
	while (i < n)
	{
		if (first[i] != second[i])
			return (0);
		i++;
	}
	return (1);
}
