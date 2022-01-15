/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_count_int.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: galfyn <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/15 09:10:53 by galfyn            #+#    #+#             */
/*   Updated: 2022/01/15 09:10:54 by galfyn           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft.h"

int	ft_count_int(long integer)
{
	int	i;

	i = 0;
	if (integer < 0)
	{
		integer *= -1;
	}
	if (integer == 0)
		return (1);
	while (integer > 0)
	{
		integer /= 10;
		i++;
	}
	return (i);
}
