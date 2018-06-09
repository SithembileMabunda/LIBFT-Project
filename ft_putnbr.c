/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smabunda <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/06/07 15:56:30 by smabunda          #+#    #+#             */
/*   Updated: 2018/06/09 15:33:48 by smabunda         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "header.h"
#include "src.h"

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putnbr(int n)
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
		ft_putnbr(i / 10);
		ft_putchar((i % 10) + '0');
	}
}

int		main(void)
{
	ft_putnbr(-676);
	return (0);
}
