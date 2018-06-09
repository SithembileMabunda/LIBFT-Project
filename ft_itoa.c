/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smabunda <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/06/07 15:58:34 by smabunda          #+#    #+#             */
/*   Updated: 2018/06/08 08:17:04 by smabunda         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../Includes/header.h"
#include "../Includes/src.h"
#include <stdio.h>

char	*ft_strrev(char *str)
{
	int i;
	int j;
	char *str2;

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
	str = (char *) malloc(sizeof(char) * (i + s));
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

int main()
{
    int a = -1233;
    printf("%s\n", ft_itoa(a));
    return 0;
}
