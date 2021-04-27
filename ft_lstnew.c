/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: galfyn <galfyn@student.21-school.ru>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/23 20:20:53 by galfyn            #+#    #+#             */
/*   Updated: 2021/04/28 00:00:31 by galfyn           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list		*ft_lstnew(void *content)
{
	t_list	*rootList;

	rootList = malloc(sizeof(t_list));
	if (rootList)
	{
		rootList->content = content;
		rootList->next = NULL;
	}
	return (rootList);
}