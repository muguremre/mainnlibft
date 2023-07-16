/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstsize.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: memre <42istanbul.com.tr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/08 03:42:25 by memre             #+#    #+#             */
/*   Updated: 2023/07/08 03:42:41 by memre            ###   ########.tr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"
#include <stdio.h>

int	ft_lstsize(t_list *lst)
{
	int		len;
	t_list	*tmp;

	len = 0;
	tmp = lst;
	if (tmp == NULL)
		return (0);
	while (tmp->next != 0)
	{
		tmp = tmp->next;
		len++;
	}
	if (tmp->next == 0)
		len++;
	return (len);
}

int main()
{
	t_list *head;
	t_list *second;
	t_list *third;

	head = ft_lstnew("memre");
	second = ft_lstnew("emre");
	third = ft_lstnew("mre");
	head->next = second;
	second->next = third;
	printf("%d", ft_lstsize(head));
	return 0;
}
