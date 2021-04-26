/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: galfyn <galfyn@student.21-school.ru>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/21 21:40:43 by galfyn            #+#    #+#             */
/*   Updated: 2021/04/27 00:32:51 by galfyn           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	size_t	i;
	size_t	n;

	i = 0;
	n = 0;
	if (!*needle)
		return ((char *)haystack);
	while (haystack[i] != '\0' && len > i)
	{
		if (haystack[i] == needle[n])
		{
			while (haystack[i] != '\0' && needle[n] != '\0')
			{
				n++;
				return (((char *)haystack)[i]);
			}
		}
		i++;
	}
	return (0);
}
