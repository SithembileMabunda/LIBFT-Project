/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strequ.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smabunda <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/06/07 15:52:18 by smabunda          #+#    #+#             */
/*   Updated: 2018/06/17 10:46:58 by smabunda         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_strequ(char const *s1, char const *s2)
{
	size_t	i;
	char	*first;
	char	*second;

	i = 0;
	if (s1 == NULL || s2 == NULL)
		return (0);
	first = (char *)s1;
	second = (char *)s2;
	while (first[i] && second[i])
	{
		if (first[i] != second[i])
			return (0);
		i++;
	}
	if (first[i] != second[i])
		return (0);
	return (1);
}
