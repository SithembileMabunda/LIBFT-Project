/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smabunda <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/06/07 15:17:02 by smabunda          #+#    #+#             */
/*   Updated: 2018/06/09 15:30:29 by smabunda         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "header.h"
#include "src.h"

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

/*int		main(void)
{
	char str[50];
	strcpy(str, "This is strong.h library function");
	ft_memset(str, '@', 5);
	printf("%s\n", str);
	return (0);
}*/
