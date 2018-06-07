/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smabunda <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/06/07 15:46:36 by smabunda          #+#    #+#             */
/*   Updated: 2018/06/07 15:46:46 by smabunda         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../Include/Headers.h"
#include "../Includes/Projects.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	int i;
	char *str;

	while (s[i] != '\0')
		i++;
	str = (char *) malloc(sizeof(char) * (i + 1));
	i = 0;
	if (str == NULL)
		return (NULL);
	while (s[i] != '\0')
	{
		str[i] = (*f)(i, s[i]);
		i++;
	}
	return (str);
}
