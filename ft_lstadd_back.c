/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_back.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: memre <42istanbul.com.tr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/08 03:44:33 by memre             #+#    #+#             */
/*   Updated: 2023/07/08 03:44:42 by memre            ###   ########.tr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"
#include <stdio.h>

void	ft_lstadd_back(t_list **alst, t_list *new)
{
	t_list	*tmp;

	if (*alst == NULL)
		*alst = new;
	else
	{
		tmp = ft_lstlast(*(alst));
		tmp->next = new;
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

	ft_lstadd_back(&head, ft_lstnew("new"));
	while (head != NULL)
	{
		printf("%s\n", head->content);
		head = head->next;
	}
	return (0);
}
