/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smabunda <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/06/07 15:56:57 by smabunda          #+#    #+#             */
/*   Updated: 2018/06/07 15:57:06 by smabunda         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../Include/Headers.h"
#include "../Includes/Projects.h"

void	ft_putnbr_fd(int n, int fd)
{
	int i;

	i = 0;
	if (n >= 0)
		i = n;
	if (n < 0)
	{
		i = n * -1;
		ft_putchar('-');
	}
	if (i >= 10)
	{
		ft_putnbr_fd(i / 10, fd);
		ft_putchar((i % 10) + '0');
	}
}
