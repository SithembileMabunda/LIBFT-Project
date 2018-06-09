/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalnum.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smabunda <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/06/07 15:32:12 by smabunda          #+#    #+#             */
/*   Updated: 2018/06/09 15:27:15 by smabunda         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "header.h"
#include "src.h"

int		ft_isalnum(int c);
{
	if (c >= 'a' && c <= 'z')
		return (c);
	else if (c >= 'A' && c <= 'Z')
		return (c);
	else if (c >= 0 && c <= 9)
		return (c);
	else
		return (0);
}
