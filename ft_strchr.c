/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: memre <42istanbul.com.tr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/05 20:11:02 by memre             #+#    #+#             */
/*   Updated: 2023/07/09 12:43:27 by memre            ###   ########.tr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

char	*ft_strchr(const char *s, int c)
{
	int	i;

	i = 0;
	if (!s && *s != 0)//if s is null
		return (0);
	while (s[i] != 0)
	{
		if (s[i] == (char)c)//if c is not null
		{
			return ((char *)(s + i));
		}
		i++;
	}
	if ((char)c == 0)//if c is null
		return ((char *)(s + i));
	return (0);
}
/*
int main()
{
	char str[] = "\0";
	
	printf("%c",'\0');
	return 0;
}
*/