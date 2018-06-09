/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smabunda <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/06/07 15:47:08 by smabunda          #+#    #+#             */
/*   Updated: 2018/06/09 15:39:45 by smabunda         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "header.h"
#include "src.h"

char	*ft_strnew(size_t size)
{
	char *str;
	int i;

	str = (char *) malloc (sizeof(char) * size);
	if (str == NULL)
		return (NULL);
	i = 0;
	while (i < size)
	{
		str[i] = '\0';
		i++;
	}
	return (str);
}

