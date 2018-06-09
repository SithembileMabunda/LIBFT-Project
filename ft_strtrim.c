/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smabunda <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/06/09 11:37:37 by smabunda          #+#    #+#             */
/*   Updated: 2018/06/09 15:41:17 by smabunda         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "header.h"
#include "src.h"

char	*ft_strtrim(char *s)
{
	int a;
	int b;
	int i;
	int k;
	char *str;

	a = 0;
	k = 0;
	i = 0;
	b = ft_strlen(s) - 1;
	while (s[a] == ' ' || s[a] == '\n' || s[a] == '\t')
		a++;
	while (s[b] == ' ' || s[b] == '\n' || s[b] == '\t')
		b++;
	str = (char *) malloc(sizeof(char) * (((k = strlen(s)) - (b - a)) + 1));
	while (s[a] <= s[b])
	{
		str[i] = s[a];
		a++;
		i++;
	}
	return (str);
}
