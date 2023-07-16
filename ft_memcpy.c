/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: memre <42istanbul.com.tr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/05 19:44:54 by memre             #+#    #+#             */
/*   Updated: 2023/07/08 03:12:54 by memre            ###   ########.tr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"
#include <stdio.h>
void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	char	*destcpy;
	char	*srccpy;
	size_t	i;

	destcpy = (char *)dest;
	srccpy = (char *)src;
	if (!dest && !src)//if dest and src are NULL
		return (NULL);
	i = 0;
	while (i < n)
	{
		destcpy[i] = srccpy[i];
		i++;
	}
	return (destcpy);
}

/*
int main()
{
    char src[]="muhammed";
    printf("Before memcpy: %s\n", src);
    ft_memcpy(src+2, src, sizeof(src)); // Here 5 is less than the length of the string and it will not go beyond the array.
    printf("After memcpy: %s\n", src);
    return 0;
}
*/