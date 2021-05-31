/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: woopark <woopark@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/21 12:49:05 by woopark           #+#    #+#             */
/*   Updated: 2021/05/21 13:33:52 by woopark          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*result;
	t_list	*cur;
	t_list	*tmp;

	if (!(result = ft_lstnew(f(lst->content))))
	{
		ft_lstdelone(result, del);
		return (NULL);
	}
	cur = result;
	lst = lst->next;
	while (lst)
	{
		if (!(tmp = ft_lstnew(f(lst->content))))
		{
			ft_lstclear(&result, del);
			return (NULL);
		}
		cur->next = tmp;
		cur = tmp;
		lst = lst->next;
	}
	return (result);
}
