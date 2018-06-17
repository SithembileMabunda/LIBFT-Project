/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memalloc.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smabunda <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/06/07 15:42:19 by smabunda          #+#    #+#             */
/*   Updated: 2018/06/17 12:38:15 by smabunda         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memalloc(size_t size)
{
	void *value;

	value = (void *)malloc(sizeof(value) * size);
	if (value == NULL)
	{
		return (NULL);
	}
	ft_bzero(value, size);
	return (value);
}
