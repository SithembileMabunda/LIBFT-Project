/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   strcat.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smabunda <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/05/17 09:47:21 by smabunda          #+#    #+#             */
/*   Updated: 2018/05/21 08:44:14 by smabunda         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include <stdio.h>

char	*ft_strcat(char *restrict s1, const char *restrict s2)
{
	int i;

	i = 0;
	while (dest[i] != '\0')
		i++;
	int dest_len = i;
	while ( src[i] != '\0')
	{
		dest[dest_len + i] = src[i];
		i++;
	}
	dest[dest_len +i] = src[i];
	return (dest);
}

int		main(void)
{
	char first[50];
	char second[50];
	strcpy(first, "hello");
	strcpy(second, "world");

	strlcat(first, second, (sizeof(char)*5));

	printf("%s\n", first);
	return (0);
}
