/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smabunda <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/06/07 15:58:34 by smabunda          #+#    #+#             */
/*   Updated: 2018/06/17 12:29:40 by smabunda         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include "stdio.h"

static int	numbers(int n)
{
	int	i;

	i = 1;
	while (n /= 10)
		i++;
	return (i);
}

char		*ft_itoa(int n)
{
	char			*str;
	int				len;
	unsigned int	tmp;

	len = numbers(n);
	tmp = n;
	if (n < 0)
	{
		tmp = -n;
		len += 1;
	}
	str = ft_strnew(len);
	if (str == NULL)
		return (NULL);
	str[--len] = tmp % 10 + 48;
	while (tmp /= 10)
	{
		str[--len] = (tmp % 10) + 48;
	}
	if (n < 0)
	{
		str[0] = 45;
	}
	return (str);
}
