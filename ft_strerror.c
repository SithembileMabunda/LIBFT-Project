/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strerror.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smabunda <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/12 12:58:58 by smabunda          #+#    #+#             */
/*   Updated: 2018/08/10 10:57:59 by smabunda         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>

char	*ft_strerror(int errnum)
{
	char *result;
	if (errnum == 1)
		result = "Operation not permitted";
	if (errnum == 2)
		result = "No such file or directory";
	if (errnum == 3)
		result = "No such process";
	if (errnum == 4)
		result = "Interrupted system call";
	if (errnum == 5)
		result = "I/O error";
	if (errnum == 6)
		result = "No such device or address";
	if (errnum == 7)
		result = "Argument list too long";
	if (errnum == 8)
		result = "Exec format error";
	if (errnum == 9)
		result = "Bad file number";
	if (errnum == 10)
		result = "No child processes";
	if (errnum == 11)
		result = "Try again";
	if (errnum == 12)
		result = "Out of memory";
	if (errnum == 13)
		result = "Permission denied";
	return (result);
}
