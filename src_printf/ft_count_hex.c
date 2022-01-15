/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_count_hex.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: galfyn <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/15 09:10:40 by galfyn            #+#    #+#             */
/*   Updated: 2022/01/15 09:11:36 by galfyn           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft.h"

int	ft_count_hex(unsigned long hex, t_format *spec)
{
	int	i;

	i = 0;
	if (!hex && spec->dot == 1 && spec->precision == 0)
		return (0);
	if (!hex)
		return (1);
	while (hex > 0)
	{
		hex /= 16;
		i++;
	}
	return (i);
}
