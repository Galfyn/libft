/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: galfyn <galfyn@student.21-school.ru>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/23 20:20:53 by galfyn            #+#    #+#             */
/*   Updated: 2021/04/23 20:42:48 by galfyn           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list		*ft_lstnew(void *content)
{
	t_list	*one_list;

	one_list = malloc(sizeof(t_list));
	if (one_list)
	{
		one_list->content = content;
		one_list->next = NULL;
	}
	return (one_list);
}