/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memalloc.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smabunda <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/05/22 11:11:32 by smabunda          #+#    #+#             */
/*   Updated: 2018/05/22 12:42:53 by smabunda         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>

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
