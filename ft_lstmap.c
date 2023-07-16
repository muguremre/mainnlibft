/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: memre <42istanbul.com.tr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/08 03:55:17 by memre             #+#    #+#             */
/*   Updated: 2023/07/08 03:55:32 by memre            ###   ########.tr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdlib.h>
#include "libft.h"
#include <stdio.h>

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*res;
	t_list	*resfct;

	(void)del;
	if (!lst || !f)
		return (NULL);
	resfct = ft_lstnew(f(lst->content));
	if (!(resfct))
		return (NULL);
	res = resfct;
	lst = lst->next;
	while (lst)
	{
		resfct = ft_lstnew(f(lst->content));
		if (!(resfct))
		{
			ft_lstclear(&resfct, del);
			break ;
		}
		lst = lst->next;
		ft_lstadd_back(&res, resfct);
	}
	return (res);
}

int main()
{
	t_list *head;
	t_list *second;
	t_list *third;

	head = (t_list *)malloc(sizeof(t_list));
	second = (t_list *)malloc(sizeof(t_list));
	third = (t_list *)malloc(sizeof(t_list));

	head->content = "head";
	head->next = second;
	second->content = "second";
	second->next = third;
	third->content = "third";
	third->next = NULL;

	ft_lstmap(head, ft_lstadd_front, free);
	while (head != NULL)
	{
		printf("%s\n", head->content);
		head = head->next;
	}
	return (0);
}