/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: galfyn <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/15 09:01:57 by galfyn            #+#    #+#             */
/*   Updated: 2022/01/15 09:01:59 by galfyn           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_printf(const char *format, ...)
{
	va_list	argptr;
	int		length;
	char	*temp;

	length = 0;
	temp = (char *)format;
	va_start(argptr, format);
	while (*temp)
	{
		if (*temp == '%')
			length += ft_parser(&temp, argptr);
		if (*temp && *temp != '%')
		{
			write(1, temp, 1);
			temp++;
			length++;
		}
	}
	va_end (argptr);
	return (length);
}
