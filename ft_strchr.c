/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   strchr.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smabunda <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/05/17 08:16:14 by smabunda          #+#    #+#             */
/*   Updated: 2018/05/17 09:43:17 by smabunda         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include <stdio.h>

char	*ft_strchr(const char *s, int c)
{
	//while (s[i] >= j && s[i] <= '\0')
	//i++;
	int i;
	char j;
	int k;
	char *dst;
	
	j = (char)c;
	i = 0;
	while (str[i] != j)
		i++;
	k = i;
	while (str[k] != '\0')
	{
	}
}

int		main(void)
{
	printf("%s", ft_strchr("bye", 'y'));
	return (0);
}
