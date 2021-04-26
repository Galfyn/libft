/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: galfyn <galfyn@student.21-school.ru>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/23 21:55:05 by galfyn            #+#    #+#             */
/*   Updated: 2021/04/26 23:12:43 by galfyn           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	size_t j;
	char *str;
	size_t lenS;


	if(!s)
		return (NULL);
	lenS = ft_strlen(s);
	if(start >= lenS)
		return(ft_strdup(""));
	if(len > lenS)
		len = lenS + 1;
	str = (char *) malloc(sizeof (char) * (len + 1));
	if(!str)
		return (NULL);
	j = 0;

	while (len--)
	{
			str[j] = s[start];
			j++;
		start++;
	}
	str[j] = '\0';
	return (str);
}
