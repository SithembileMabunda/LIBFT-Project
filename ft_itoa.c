/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smabunda <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/06/07 15:58:34 by smabunda          #+#    #+#             */
/*   Updated: 2018/06/15 10:28:02 by smabunda         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_itoa(int n)
{
	char *str;
	int i;
	int sign;
	int s;

	i = 0;
	s = 0;
	if (n < 0 && ++s)
		n = -n;
	sign = n;
	while (sign != 0)
	{
		sign = sign / 10;
		i++;
	}
	str = (char *) malloc(sizeof(char) * (i + s) + 1);
	if (str == NULL)
		return (NULL);
	i = 0;
	while (n != 0)
	{
		str[i] = (n % 10) + '0';
		i++;
		n = n / 10;
	}
	str[i + 1] = '\0';
	if (s == 1)
		str[i] = '-';
	str = ft_strrev(str);
	return (str);
}
