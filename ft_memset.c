/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   memset.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smabunda <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/05/21 11:26:18 by smabunda          #+#    #+#             */
/*   Updated: 2018/05/21 15:34:10 by smabunda         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include <stdio.h>

void	*ft_memset(void *s, int c, size_t n)
{
	int i;
	char *str;
	
	i = 0;
	str = (char *)s;
	while (i != n)
	{
		*(unsigned char*)(str + i) = (unsigned char)c;
		i++;
	}
	return (str);
}

int		main(void)
{
	char str[50];
	strcpy(str, "This is strong.h library function");
	ft_memset(str, '@', 5);
	printf("%s\n", str);
	return (0);
}
