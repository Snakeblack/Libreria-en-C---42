/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap_bonus.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mretamoz <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/19 15:53:09 by mretamoz          #+#    #+#             */
/*   Updated: 2019/11/27 17:22:46 by mretamoz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list *ret;
	t_list *tmp;

	del = (void *)del;
	if (!lst)
		return (NULL);
	if (!(ret = ft_lstnew(f(lst))))
		return (NULL);
	tmp = ret;
	while (lst->next)
	{
		lst = lst->next;
		if (!(tmp->next = ft_lstnew(f(lst))))
			return (NULL);
		tmp = tmp->next;
	}
	return (ret);
}