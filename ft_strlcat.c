/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smabunda <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/06/07 15:22:44 by smabunda          #+#    #+#             */
/*   Updated: 2018/06/09 15:37:45 by smabunda         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "header.h"
#include "src.h"

size_t	ft_strlcat(char *restrict dst, const char *restrict src, size_t dstsize)
{
	int i;
	int j;
	int len;

	i = 0;
	j = 0;
	while (dstsize != 0 && dst[i] != '\0')
	{
		i++;
		dstsize--;
	}
	if ((dstsize - 1) == 0)
		return ((i) + strlen(src));
	len = dstsize - i;
	while (src[j] != '\0')
	{
		if (len != 1)
		{
			dst[i] = src[j];
			len--;
			i++;
		}
		j++;
	}
	dst[i] = '\0';
	return (i);
}

int		main(void)
{
	char first[50];
	char second[50];
	int c;
	strcpy(first, "hello");
	strcpy(second, "world");

	c = (int) ft_strlcat(first, second, 6);

	printf("%d\n", c);
	return (0);
}
