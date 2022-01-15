/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: galfyn <galfyn@student.21-school.ru>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/23 20:20:53 by galfyn            #+#    #+#             */
/*   Updated: 2022/01/15 09:01:36 by galfyn           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstnew(void *content)
{
	t_list	*root_list;

	root_list = malloc(sizeof(t_list));
	if (!root_list)
		return (NULL);
	root_list->content = content;
	root_list->next = NULL;
	return (root_list);
}
