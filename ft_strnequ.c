/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnequ.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smabunda <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/06/07 15:49:40 by smabunda          #+#    #+#             */
/*   Updated: 2018/06/11 11:43:16 by smabunda         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_strnequ(char const *s1, char const *s2, size_t n)
{
	size_t	i;
	char	*first;
	char	*second;

	i = 0;
	if (s1 == NULL)
		return (0);
	first = (char *)s1;
	second = (char *)s2;
	while (i < n)
	{
		if (first[i] != second[i])
			return (0);
		i++;
	}
	return (1);
}
