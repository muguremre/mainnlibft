/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstlast.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: memre <42istanbul.com.tr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/08 03:43:07 by memre             #+#    #+#             */
/*   Updated: 2023/07/08 03:43:23 by memre            ###   ########.tr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"
#include <stdio.h>

t_list	*ft_lstlast(t_list *lst)
{
	if (!lst)
		return (lst);
	while (lst->next != 0)
		lst = lst->next;
	return (lst);
}

int main()
{
	t_list *head;
	t_list *second;
	t_list *third;
	t_list *last;

	head = ft_lstnew("memre");
	second = ft_lstnew("emre");
	third = ft_lstnew("mre");
	head->next = second;
	second->next = third;
	last = ft_lstlast(head);
	printf("%s", last->content);
	return 0;
}
