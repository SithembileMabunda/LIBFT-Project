/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strclr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smabunda <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/06/07 15:43:30 by smabunda          #+#    #+#             */
/*   Updated: 2018/06/07 15:43:43 by smabunda         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../Include/Headers.h"
#include "../Includes/Projects.h"

void	ft_strclr(char *s)
{
	int i;

	i = 0;
	while (s[i] != '\0')
	{
		if (s[i] != '\0')
		{
			s[i] = '\0';
			i++;
		}
		else
			i++;
	}
}
