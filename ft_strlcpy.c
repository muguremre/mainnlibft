/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: memre <42istanbul.com.tr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/05 19:47:05 by memre             #+#    #+#             */
/*   Updated: 2023/07/05 19:47:35 by memre            ###   ########.tr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"
#include <stdio.h>

size_t	ft_strlcpy( char *dst, const char *src, size_t size)
{
	size_t	i;
	size_t	res;

	i = 0;
	res = ft_strlen(src);
	if (size == 0)
		return (res);
	while (i < size - 1 && src[i])
	{
		dst[i] = src[i];
		i++;
	}
	if (size > i)
		dst[i] = 0;
	return (res);
}
/*
int main()
{
	char dst[]="asdtyfgfd";
	char src[]="ht33";
	printf("Before memcpy: %s\n", src);
	printf("%zu",ft_strlcpy(dst, src, 20));
	return 0;
}
*/