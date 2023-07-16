/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstdelone.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: memre <42istanbul.com.tr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/08 03:45:14 by memre             #+#    #+#             */
/*   Updated: 2023/07/08 03:46:23 by memre            ###   ########.tr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"
#include <stdio.h>

void	ft_lstdelone(t_list *lst, void (*del)(void*))
{
	if (lst || del)
	{
		del (lst->content);
		free (lst);
	}
}

int main(){
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

	ft_lstdelone(head, free);
	while (head != NULL)
	{
		printf("%s\n", head->content);
		head = head->next;
	}
	return (0);
}