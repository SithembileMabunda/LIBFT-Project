/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putchar.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smabunda <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/06/07 15:54:03 by smabunda          #+#    #+#             */
/*   Updated: 2018/06/09 15:30:47 by smabunda         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "header.h"
#include "src.h"

void	ft_putchar(char c)
{
	write(1, &c, 1);
}
