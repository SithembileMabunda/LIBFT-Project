/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_striter.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smabunda <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/06/07 15:45:10 by smabunda          #+#    #+#             */
/*   Updated: 2018/06/07 15:45:22 by smabunda         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../Include/Headers.h"
#include "../Includes/Projects.h"

void	ft_iter(char *str)
{
	int i;

	i = 0;
	while (str[i] != '\0')
	{
		str[i] = 'a';
		i++;
	}
}

void	ft_striter(char *s, void (*f)(char *))
{
	int i;

	i = 0;
	while (s[i] != '\0')
	{
		(*f)(&s[i]);
		i++;
	}
}

int		main(void)
{
	char s[] = "hello world";
	void (*f)(char *);

	f = &ft_iter;
	ft_striter(s, f);
	return (0);
}
