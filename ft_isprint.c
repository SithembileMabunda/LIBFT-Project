/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isprint.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smabunda <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/06/07 15:34:23 by smabunda          #+#    #+#             */
/*   Updated: 2018/06/07 15:34:34 by smabunda         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../Include/Headers.h"
#include "../Includes/Projects.h"

int		ft_isprint(int c)
{
	if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
		return (c);
	else if (c >= 0 && c <= 9)
		return (c);
	else if ( c == ' ')
		return (c);
	else
		return (0);
}
