/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strerror.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smabunda <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/12 12:58:58 by smabunda          #+#    #+#             */
/*   Updated: 2018/07/12 13:42:56 by smabunda         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>

char	*ft_strerror(int errnum)
{
	char *result;
	if (errnum == 1)
		result = "Operation not permitted";
	else if (errnum == 2)
		result = "No such file or directory";
	else if (errnum == 3)
		result = "No such process";
	else if (errnum == 4)
		result = "Interrupted system call";
	else if (errnum == 5)
		result = "I/O error";
	else if (errnum == 6)
		result = "No such device or address";
	else if (errnum == 7)
		result = "Argument list too long";
	else if (errnum == 8)
		result = "Exec format error";
	else if (errnum == 9)
		result = "Bad file number";
	else if (errnum == 10)
		result = "No child processes";
	else if (errnum == 11)
		result = "Try again";
	else if (errnum == 12)
		result = "Out of memory";
	else if (errnum == 13)
		result = "Permission denied";
	return (result);
}
