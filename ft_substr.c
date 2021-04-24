/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: galfyn <galfyn@student.21-school.ru>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/23 21:55:05 by galfyn            #+#    #+#             */
/*   Updated: 2021/04/24 01:13:37 by galfyn           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	size_t i;
	size_t j;
	char *str;

	if(!s)
		return (NULL);
	str = (char *) malloc(sizeof (*s) * (len + 1));
	i = 0;
	j = 0;
	if(!str)
		return (NULL);
	while (s[i])
	{
		if (i >= start && j <= len - 1)
		{
			str[j] = s[i];
			j++;
		}
		i++;
	}
	str[j] = '\0';
	return (str);
}