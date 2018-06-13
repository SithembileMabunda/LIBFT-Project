/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrev.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smabunda <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/06/10 13:58:18 by smabunda          #+#    #+#             */
/*   Updated: 2018/06/10 15:14:25 by smabunda         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrev(char *str)
{
	int		i;
	int		j;
	char	*str2;

	i = 0;
	j = 0;
	while (str[i] != '\0')
		i++;
	str2 = (char *) malloc(sizeof(char) * i + 1);
	i--;
	while (str[i] >= 0)
	{
		str2[j] = str[i];
		j++;
		i--;
	}
	return (str2);
}
