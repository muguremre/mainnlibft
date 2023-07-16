/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: memre <42istanbul.com.tr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/08 03:47:06 by memre             #+#    #+#             */
/*   Updated: 2023/07/08 03:47:23 by memre            ###   ########.tr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"
#include <stdio.h>

void	ft_lstclear(t_list **lst, void (*del)(void *))
{
	t_list	*temp;

	if (!lst || !del)
		return ;
	while (*lst != NULL)
	{
		temp = (*lst)->next;
		ft_lstdelone(*lst, del);
		*lst = temp;
	}
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

	ft_lstclear(&head, free);
	while (head != NULL)
	{
		printf("%s\n", head->content);
		head = head->next;
	}
	return (0);
}