/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_front.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: galfyn <galfyn@student.21-school.ru>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/23 21:09:05 by galfyn            #+#    #+#             */
/*   Updated: 2021/04/28 00:12:58 by galfyn           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void ft_lstadd_front(t_list **lst, t_list *new)
{
	t_list frontList;

	if(frontList)
	{
		frontList->content = content;
		frontList->next = ft_lstnew(*lst);
	}
}