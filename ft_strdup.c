/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: memre <42istanbul.com.tr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/05 20:53:44 by memre             #+#    #+#             */
/*   Updated: 2023/07/08 03:15:59 by memre            ###   ########.tr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"
#include <stdio.h>

char	*ft_strdup(const char *source)
{
	char	*mall;
	int		i;

	mall = malloc(sizeof(char) * (ft_strlen(source) + 1));
	if (!mall)
		return (NULL);
	i = 0;
	while (source[i])
	{
		mall[i] = source[i];
		i++;
	}
	mall[i] = 0;
	return (mall);
}
/*
int main()
{
	char str[] = "memre";
	printf("%s \n", ft_strdup(str));
	printf("%s", str);
	return 0;
}
*/