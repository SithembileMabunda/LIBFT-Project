/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsplit.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smabunda <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/06/09 15:16:16 by smabunda          #+#    #+#             */
/*   Updated: 2018/06/17 12:46:37 by smabunda         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int		ft_count_words(const char *str, char chr)
{
	int		i;
	int		wc;

	i = 0;
	wc = 1;
	while (str[i] != '\0')
	{
		if (str[i] == chr)
			wc++;
		i++;
	}
	return (wc);
}

char			**ft_strsplit(char const *s, char c)
{
	int		i;
	int		j;
	int		k;
	char	**dest;

	if (s == NULL)
		return (NULL);
	i = 0;
	k = 0;
	if (!(dest = (char **)malloc(sizeof(char *) * (ft_count_words(s, c)) + 1)))
		return (NULL);
	while (s[i] != '\0')
	{
		while (s[i] == c)
			i++;
		j = i;
		while (s[i] != '\0' && s[i] != c)
			i++;
		if (i > j)
		{
			dest[k++] = ft_strndup(s + j, i - j);
		}
	}
	dest[k] = 0;
	return (dest);
}
