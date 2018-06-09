/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memalloc.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smabunda <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/06/07 15:42:19 by smabunda          #+#    #+#             */
/*   Updated: 2018/06/09 15:28:43 by smabunda         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "header.h"
#include "src.h"

void	*ft_memalloc(size_t size)
{
	void *value;
	value = (size_t*) malloc (sizeof(size_t) * size);
	if (value == NULL)
	{
		printf("Failed to allocate memory");
		exit (1);
	}
	return (value = bzero(value, size));
}

int		main(void)
{
	printf("%s\n", ft_memalloc(5));
	return (0);
}
